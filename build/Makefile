CFLAGS= -std=c++17 -O2
LDFLAGS= -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
INC_DIR= ../ext/include
SRC_DIR= ../src/*.cpp

VulkanEngine: $(SRC_DIR) $(INC_DIR)
	g++ $(CFLAGS) -o VulkanEngine $(SRC_DIR) $(LDFLAGS)

.PHONY: test clean

test: VulkanEngine
	../build/./VulkanEngine

clean:
	rm -f VulkanEngine
