cmake_minimum_required(VERSION 3.6.0)

project(FoxEdit VERSION 0.1.0)




file(GLOB_RECURSE FoxEdit_src CONFIGURE_DEPENDS "src/*.h" "src/*.cpp" "dep/glm/*.hpp" "dep/glm/*.inl")

add_executable(${PROJECT_NAME} ${FoxEdit_src})

add_subdirectory(dep/glfw)
add_subdirectory(dep/glad)

#include directories

include_directories(src dep/glfw/include dep/glm)


if (UNIX)
    target_compile_definitions(${PROJECT_NAME} PRIVATE LINUX NOMINMAX)
    set(CMAKE_CXX_STANDARD 20)
endif (UNIX)

target_link_libraries(${PROJECT_NAME} glfw glad )

