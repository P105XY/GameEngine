#pragma once

#include "Core.h"

namespace OPENGLENGINE
{
	class OPENGL_API Application
	{

	public:

		Application();
		virtual ~Application();

		void Run();

	};

	//defined client
	Application* CreateApplication();
}
