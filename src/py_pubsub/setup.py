from setuptools import find_packages, setup

package_name = 'py_pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nazar',
    maintainer_email='yfpfh233@gmail.com',
    description='My cool package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
          'talker = py_pubsub.publisher_member_function:main',
          'listener = py_pubsub.subscriber_member_function:main',
          'fibonacci = py_pubsub.fibonacci_action_server:main',
          'fibonacci_client = py_pubsub.fibonacci_action_client:main',
          'custom_server = py_pubsub.toxic_relationship_action_server:main',
          'custom_client = py_pubsub.toxic_relationship_action_client:main',
          'cool_service = py_pubsub.cool_service:main',
          'cool_client = py_pubsub.cool_client:main',
          'publisher_tutorial = py_pubsub.publisher_tutorial:main',
          'subscriber_tutorial = py_pubsub.subscriber_tutorial:main',
        ],
    },
)

# ACTION SERVER
# Action client
# Service
# Client (for service)
