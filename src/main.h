#pragma once    
#include "io/Timing.h"

class Renderer;
class Application{
public:
    void StartApplication();    
    
    void ShutdownApplication();
    
    
    
    inline static Application& GetApplication() {
        if(!m_application){
            m_application = new (Application);
        }
        return *m_application;
    }
private:
    void OnFrame();

    static Application* m_application;
    bool m_running = true;
    //Renderer* m_renderer = nullptr;
    Timing* m_time = nullptr;
};

#define CORE Application::GetApplication()
