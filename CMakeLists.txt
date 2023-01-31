cmake_minimum_required(VERSION 3.24)

set(PROJECT_NAME "vulkanTutorial")

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

find_package(Vulkan REQUIRED)

include_directories(
    /usr/local/include
    ${VULKAN_SDK_PATH}/include
)
link_directories(
    /usr/local/lib
    ${VULKAN_PATH}/lib
)

FILE(GLOB_RECURSE SOURCE_FILES src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE glfw)
target_link_libraries(${PROJECT_NAME} PRIVATE Vulkan::Vulkan)

