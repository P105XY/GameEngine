#include <OPENGL.h>

class SandBox : public OPENGLENGINE::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

OPENGLENGINE::Application* OPENGLENGINE::CreateApplication()
{
	return new SandBox();
}