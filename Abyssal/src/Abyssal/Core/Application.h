#pragma once

#include "Core.h"

namespace Abyssal {

    class Application
    {
    public:
        Application();
        virtual ~Application();
        
        void Run();

        inline static Application& Get() { return *s_Instance; }
    private:
        bool m_IsRunning;
    private:
        static Application* s_Instance;
    };

    Application* CreateApplication();

}

