project "Abyssal"
	kind "StaticLib"
	language "C++"
    cppdialect "C++20"
    staticruntime "on"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "abyssalpch.h"
	pchsource "abyssalpch.cpp"

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	includedirs
	{
		"src",
		"%{IncludeDirs.spdlog}",
	}

	defines {
        "_CRT_SECURE_NO_WARNINGS",
		"GLFW_INCLUDE_NONE"
    }

	filter "system:windows"
		systemversion "latest"

		buildoptions "/utf-8"

		defines
		{
		}

		filter "configurations:Debug"
			defines "ABYSSAL_DEBUG"
			runtime "Debug"
			symbols "on"

		filter "configurations:Release"
			defines "ABYSSAL_RELEASE"
			runtime "Release"
			optimize "on"


		filter "configurations:Dist"
			defines "ABYSSAL_DIST"
			runtime "Release"
			optimize "on"