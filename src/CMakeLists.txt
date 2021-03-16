rock_library(envire_robot_visualizer
    SOURCES Loader.cpp
    HEADERS Loader.hpp
    DEPS_PKGCONFIG envire_core envire_urdf
    )

rock_find_qt4(QtWidgets QtWebKit QtCore QtGui)

rock_executable(envire_robot_visualizer_bin Main.cpp
    DEPS envire_robot_visualizer
    DEPS_PKGCONFIG envire_visualizer)

