cmake_minimum_required(VERSION 3.24)

project(vulkanTutorial)

set(CMAKE_CXX_STANDARD 20)

include_directories(
        #brew headers
        /usr/local/include
        ${VULKAN_SDK_PATH}/include
)
link_directories(
        #brew lib
        /usr/local/lib
        ${VULKAN_PATH}/lib
)

add_executable(vulkanTutorial main.cpp src/first_app.cpp src/lve_window.cpp)
target_link_libraries(vulkanTutorial glfw)

