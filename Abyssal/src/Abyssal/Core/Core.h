#pragma once

#ifdef ABYSSAL_DEBUG
    #define ABYSSAL_ENABLE_ASSERTS
#endif

#ifdef ABYSSAL_PLATFORM_WINDOWS
#else
    #error Abyssal is only supported on Windows!
#endif

#ifdef ABYSSAL_ENABLE_ASSERTS
    #define ABYSSAL_ASSERT(x, ...) { if(!x) { ABYSSAL_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
    #define ABYSSAL_CORE_ASSERT(x, ...) { if(!x) { ABYSSAL_CORE_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
    #define ABYSSAL_ASSERT(x, ...)
    #define ABYSSAL_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
