import rclpy
from rclpy.node import Node
from py_pubsub.srv import Cool

class CoolService(Node):

    def __init__(self):
        super().__init__('add_two_ints_service')
        self.srv = self.create_service(Cool, 'add_two_ints', self.add_two_ints_callback)

    def add_two_ints_callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f'Incoming request: a={request.a}, b={request.b}, sum={response.sum}')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = CoolService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
