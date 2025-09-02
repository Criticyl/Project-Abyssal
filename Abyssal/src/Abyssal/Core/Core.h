#pragma once

#ifdef ABYSSAL_DEBUG
    #define ABYSSAL_ENABLE_ASSERTS
#endif

#ifdef ABYSSAL_PLATFORM_WINDOWS
#else
    #error Abyssal is only supported on Windows!
#endif

#define BIT(x) (1 << x)
