#include "Loader.hpp"

#include <envire_urdf/GraphLoader.hpp>



Loader::Loader() {
    graph = std::make_shared<envire::core::EnvireGraph>();
}

void Loader::loadURDF(const std::string& path) {
    std::shared_ptr<envire::urdf::GraphLoader> urdfLoader = std::make_shared<envire::urdf::GraphLoader>(graph);
    urdf::ModelInterfaceSharedPtr urdfModel = urdf::parseURDFFile(path);
    graph->addFrame("robot");
    envire::core::EnvireGraph::vertex_descriptor vd = graph.get()->getVertex("robot");
    urdfLoader->loadStructure(vd,*(urdfModel.get()));

    //urdfLoader->addURIPath("package://", packageURI);
    urdfLoader->loadVisuals(*(urdfModel.get()), path);
}
