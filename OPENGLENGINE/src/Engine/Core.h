#pragma once


#ifdef GL_PLATFORM_WINDOWS
	#ifdef GL_BUILD_DLL
		#define OPENGL_API __declspec(dllexport)
	#else
		#define OPENGL_API __declspec(dllimport)
	#endif
#else
	#error GL only support Windows
#endif