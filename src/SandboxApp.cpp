#define DEBUG
#include "Engine/Core/Log.h"
#include <ArcEngine.h>

#include <iostream>

class SandboxApp : public AE::Application
{
public:

  // On Start
	SandboxApp()
	{
    AE_CLIENT_INFO("App start");
	}

  // Render Loop 60fps
  void onRender()
  {
    R2D->Begin();

    R2D->Rect({0.0, 0.0});

    R2D->End();
  }

  // On Exit
	~SandboxApp()
	{
	}
};

AE::Application* AE::CreateApplication()
{
	return new SandboxApp();
}
