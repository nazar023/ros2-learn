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
    colcon build --packages-select py_pubsub toxic_relationship && \
    source install/setup.bash"
