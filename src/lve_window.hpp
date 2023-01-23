#pragma once

#include <GLFW/glfw3.h>
#include <string>

namespace lve {

class lveWindow {
    public:
        lveWindow(int w, int h, std::string name);
        ~lveWindow();
    
        lveWindow(const lveWindow &) = delete;
        lveWindow &operator=(const lveWindow &) = delete;
    
        bool shouldClose() { return glfwWindowShouldClose(window); }
    private:
        void initWindow();
        
        const int width;
        const int height;
        
        std::string windowName;
        GLFWwindow *window;
};

}
