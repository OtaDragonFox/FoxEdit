#pragma once
#include <chrono>
#include <thread>


class Timing
{
public:
    //Setup timing logic with updates/s
    Timing(int in_upm);
    
    void FrameStart();
    void FrameEnd();


private:
    float m_delta_time;
    float m_delta_ms;
    std::chrono::steady_clock::time_point m_frame_start;
    std::chrono::steady_clock::time_point m_frame_end;

};

