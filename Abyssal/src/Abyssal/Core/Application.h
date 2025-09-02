#pragma once

#include "Core.h"

namespace Abyssal {

    class Application
    {
    public:
        Application();
        virtual ~Application();
        
        void Run();
    private:
        static Application* s_Instance;
    };

    Application* CreateApplication();

}

