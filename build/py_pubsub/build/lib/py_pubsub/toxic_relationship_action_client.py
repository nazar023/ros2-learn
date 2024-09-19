import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from toxic_relationship.action import ToxicRelationship


class ToxicRelationshipActionClient(Node):

    def __init__(self):
        super().__init__('toxic_relationship_action_client')
        self._action_client = ActionClient(self, ToxicRelationship, 'relationship')

    def send_goal(self, toxicity_rate):
        goal_msg = ToxicRelationship.Goal()
        goal_msg.toxicity_rate = toxicity_rate

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result

        if not result.living_status:
            self.get_logger().info('You died 💀')
        else:
            self.get_logger().info('You remained alive and happily lived 10 years together :D ')

        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'{feedback.feedback}')


def main(args=None):
    rclpy.init(args=args)
    action_client = ToxicRelationshipActionClient()

    while True:
      try:
        # Prompt user for input
        user_input = int(input('Enter the toxicity rate of your relationship (1 to 100): '))

        # Check if input is within the valid range
        if 1 <= user_input <= 100:
            break  # Exit loop if input is valid
        else:
            print("Invalid input! Please enter a number between 1 and 100.")
      except ValueError:
          print("Invalid input! Please enter an integer.")

    action_client.send_goal(user_input)
    rclpy.spin(action_client)


if __name__ == '__main__':
    main()