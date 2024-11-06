#pragma once
#include <MathTypes.h>

struct GLFWwindow;
class Renderer{
public:
    void SetupRenderer(const char * in_application_name, ivec2 in_screen_res);


    ivec2 m_screen_size;
    GLFWwindow* m_window;
};