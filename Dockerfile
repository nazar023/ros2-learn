ARG ROS_DISTRO=humble
FROM osrf/ros2:nightly-rmw-nonfree

# Install necessary packages for ROS2, colcon, and development
RUN apt-get update && apt-get install -y \
      tree \
      git \
      python3-colcon-common-extensions \
      ros-${ROS_DISTRO}-ament-cmake \
      ros-${ROS_DISTRO}-demo-nodes-cpp \
      ros-${ROS_DISTRO}-demo-nodes-py && \
    rm -rf /var/lib/apt/lists/*

# Clone specific branch of your repository
RUN mkdir -p ~/ros2 && \
    cd ~/ros2 && \
    git clone --branch add-docker-file https://github.com/nazar023/ros2-learn.git

# Build the workspace
RUN bash -c "cd ~/ros2/ros2-learn && \
    rm -rf build/ install/ log/ && \
    source /opt/ros/${ROS_DISTRO}/setup.bash && \
    colcon build && \
    source install/setup.bash && \
    echo 'Packages:' && ros2 pkg list"

# Source the setup.bash and run the custom server and client
CMD bash -c "source ~/ros2/ros2-learn/install/setup.bash && \
    ros2 run py_pubsub custom_server & \
    ros2 run py_pubsub custom_client"
