#include "main.h"
#include <iostream>

Application* Application::m_application = nullptr;

int main() {
    CORE.StartApplication();
}

void Application::StartApplication()
{
    m_time = new Timing(2);

    while(m_running){
        m_time->FrameStart();
        OnFrame();
        m_time->FrameEnd();

    }
    ShutdownApplication();
}

void Application::ShutdownApplication()
{
    delete(m_time);
    //delete(m_renderer);
}

void Application::OnFrame()
{
}
