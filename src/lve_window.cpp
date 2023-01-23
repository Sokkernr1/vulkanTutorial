#include "lve_window.hpp"

namespace lve {

lveWindow::lveWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
    initWindow();
}

lveWindow::~lveWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void lveWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    
    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
}

}
