#include "../ext/include/app.h"

namespace vulkanEngine {

    void App::run() {
        while(!Window.shouldClose()) {
            glfwPollEvents();
        }
    } 
} // namespace vulkanEngine
