#include "Timing.h"

Timing::Timing(int in_upm)
{
    if(!(in_upm > 1)) {
        return;
    }
    m_delta_time = 1.0f / (float)in_upm;
    m_delta_ms = 1000.0f / (float)in_upm;
}

void Timing::FrameStart()
{
    m_frame_start = std::chrono::steady_clock::now();
}

void Timing::FrameEnd()
{
    m_frame_end = std::chrono::steady_clock::now();
    std::chrono::duration<float> elapsed = m_frame_end - m_frame_start;

    if ((m_delta_ms - elapsed.count()) > 0) {
        std::this_thread::sleep_for(
            std::chrono::milliseconds(
                int64_t(m_delta_ms - elapsed.count() * 1000)
            )
        );
    } else {}
}
