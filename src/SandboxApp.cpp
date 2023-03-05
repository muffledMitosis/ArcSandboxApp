#include <ArcEngine.h>

class SandboxApp : public AE::Application
{
public:
	SandboxApp()
	{
	}

	~SandboxApp()
	{
	}
};

AE::Application* AE::CreateApplication()
{
	return new SandboxApp();
}