#pragma once

#include "abyssalpch.h"

#include "Abyssal/Core/Core.h"

namespace Abyssal {

    struct WindowSettings
    {
        std::string Title;
        std::uint32_t Width;
        std::uint32_t Height;

        WindowSettings(const std::string& title = "Abyssal Engine",
                       std::uint32_t width = 1280,
                       std::uint32_t height = 720)
            : Title(title), Width(width), Height(height) { }
    };

    class Window
    {
    public:
        virtual ~Window() = default;

        virtual void OnUpdate() = 0;
        
        virtual std::uint32_t GetWidth() const = 0;
        virtual std::uint32_t GetHeight() const = 0;

        virtual void SetVSync(bool enabled) = 0;
        virtual void IsVSync() const = 0;

        virtual void* GetWindow() const = 0;

        static Window* Create(const WindowSettings& settings = WindowSettings());
    };
}