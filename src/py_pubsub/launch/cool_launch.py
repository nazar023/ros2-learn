from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='py_pubsub',
            executable='listener',
            name='py_pubsub'
        ),
        Node(
            package='py_pubsub',
            executable='talker',
            name='py_pubsub'
        ),
    ])
