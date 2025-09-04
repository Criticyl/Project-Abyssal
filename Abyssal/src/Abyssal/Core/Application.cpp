#include "abyssalpch.h"
#include "Application.h"

namespace Abyssal {

    Application* Application::s_Instance = nullptr;

    Application::Application()
    {
        ABYSSAL_CORE_ASSERT(!s_Instance, "Application already exists!");
        s_Instance = this;

        m_IsRunning = true;
    }

    Application::~Application()
    {

    }

    void Application::Run()
    {

        while (m_IsRunning)
        {

        }
    }
}