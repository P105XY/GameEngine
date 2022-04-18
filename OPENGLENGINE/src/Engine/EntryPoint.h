#pragma once

#ifdef GL_PLATFORM_WINDOWS

extern OPENGLENGINE::Application* OPENGLENGINE::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello engine");
	auto app = OPENGLENGINE::CreateApplication();
	app->Run();

	return 0;
}

#endif