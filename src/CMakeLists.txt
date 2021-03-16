rock_library(envire_robot_visualizer
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(envire_robot_visualizer_bin Main.cpp
    DEPS envire_robot_visualizer)

