#include <ArcEngine.h>

#include <iostream>

class SandboxApp : public AE::Application
{
public:
  int i;

	SandboxApp()
	{
    i=0;
	}

  // Render Loop 60fps
  void onRender()
  {
    std::cout << i << std::endl;
    i++;
  }

	~SandboxApp()
	{
	}
};

AE::Application* AE::CreateApplication()
{
	return new SandboxApp();
}
