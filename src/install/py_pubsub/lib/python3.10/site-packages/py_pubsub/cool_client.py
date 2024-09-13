import rclpy
from rclpy.node import Node
from py_pubsub.srv import Cool

class CoolClient(Node):

    def __init__(self):
        super().__init__('add_two_ints_client')
        self.cli = self.create_client(Cool, 'add_two_ints')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req = Cool.Request()

    def send_request(self, a, b):
        self.req.a = a
        self.req.b = b
        self.future = self.cli.call_async(self.req)
        self.future.add_done_callback(self.callback)

    def callback(self, future):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}')
        else:
            self.get_logger().info(f'Result of add_two_ints: {response.sum}')

def main(args=None):
    rclpy.init(args=args)
    client = CoolClient()
    client.send_request(3, 4)
    rclpy.spin(client)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
