project "Sandbox"
	kind "ConsoleApp"
	language "C++"
    cppdialect "C++20"
    staticruntime "off"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	includedirs
	{
		"%{IncludeDirs.spdlog}",
		"%{wks.location}/Abyssal/src",
		--[["Abyssal/vendor",
		"%{IncludeDir.glm}"]]--
	}

	dependson
	{
		"Abyssal"
	}

	links
	{
		"Abyssal"
	}

	filter "system:windows"
		systemversion "latest"

		buildoptions "/utf-8"

		defines
		{
			"ABYSSAL_PLATFORM_WINDOWS",
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