#pragma once

#include "window.h"
#include "pipeline.h"
#include "device.h"

namespace vulkanEngine {
    class App  {
        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;

            void run();

        private:
            Window window{WIDTH, HEIGHT, "Quorra Engine"};
            Device device{window};
            Pipeline pipeline{
                device,
                "./shaders/simple_shader.vert.spv", 
                "./shaders/simple_shader.frag.spv", 
                Pipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};
    };
    
} // namespace vulkanEngine
