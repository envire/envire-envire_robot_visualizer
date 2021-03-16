#include <iostream>

#include "Loader.hpp"
#include <envire_urdf/GraphLoader.hpp>
#include <QApplication>
#include <envire_visualizer/EnvireVisualizerInterface.hpp>
#include <envire_visualizer/EnvireVisualizerWindow.hpp>

using namespace envire::viz;

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    EnvireVisualizerWindow window;

    Loader loader;
    loader.loadURDF(argv[1]);


    window.displayGraph(loader.getGraphPtr(), "robot");
    window.show();
    app.exec();

    return 0;
}
