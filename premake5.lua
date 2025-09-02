include "Dependencies.lua"

workspace "Project-Abyssal"
	architecture "x64"
	startproject "Sandbox"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	include "Abyssal/premake5.lua"
	include "Sandbox/premake5.lua"


group "Dependencies"
group ""
