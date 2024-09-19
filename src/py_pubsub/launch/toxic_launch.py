from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='py_pubsub',
            executable='custom_server',
            name='py_pubsub'
        ),
        Node(
            package='py_pubsub',
            executable='custom_client',
            name='py_pubsub'
        ),
    ])