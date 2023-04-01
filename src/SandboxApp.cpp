#define DEBUG
#include <ArcEngine.h>

#include <iostream>

class SandboxApp : public AE::Application
{
public:

  // On Start
	SandboxApp()
	{
    AE_CORE_INFO("App Started");
    AE_CLIENT_INFO("LOLL Started");
	}

  // Render Loop 60fps
  void onRender()
  {
  }

  // On Exit
	~SandboxApp()
	{
    AE::Logger::GetClientLogger()->info("App Exit");
	}
};

AE::Application* AE::CreateApplication()
{
	return new SandboxApp();
}
