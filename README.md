# ALYSSIS-Engine
A small vulkan render engine named Alyssis

## Description

Simple render engine named Alyssis. It is written in C++17 designed to take
advantage of fixed functions from the Vulkan API. Currently working on this as
part-time project for research purposes and to develop skills in modern graphics
programming. The ultimate goal is to implement the functions from the JANE
Engine and the ALYSSIS Engine to one engine. Eventually the JANE engine will no
longer exist and most of the code will end up in this repository.

## Getting Started

### Dependencies

* [@Vulkan](https://www.vulkan.org/)
* [@GLFW](https://github.com/glfw/glfw)
* [@imgui](https://github.com/ocornut/imgui)

### Installing


* Here is how to set up your development environment for your OS of choice:
* [@Vulkan Tutorial](https://vulkan-tutorial.com/Development_environment)

### Executing program

You will need to to build a shell script in order to compile the fragment
and vertix shaders or else the program will not run. You will need the
glsl and shader files in order for the engine to compile.


```
./compile.sh
```

## Code Snippet

```
    LveWindow::LveWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
        initWindow();
    }

    LveWindow::~LveWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }
```

## Author

- Adrian Gutierrez

## Licsense

## Acknowledgements

I'd like to acknowledge Peter Shirley and Brendan Gales. Without their tutorials
this would not be possible.
