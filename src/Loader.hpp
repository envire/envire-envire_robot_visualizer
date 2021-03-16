# pragma once

#include <memory>
#include <string>

#include <envire_core/graph/EnvireGraph.hpp>

class Loader {
 public:
    Loader();

    void loadURDF(const std::string& path);

    std::shared_ptr<envire::core::EnvireGraph> getGraphPtr() {
        return graph;
    }

 private:
    std::shared_ptr<envire::core::EnvireGraph> graph;
};
