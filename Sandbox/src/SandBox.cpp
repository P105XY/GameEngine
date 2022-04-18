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


int main()
{
	SandBox* sandbox = new SandBox();
	sandbox->Run();

	return 0;
}