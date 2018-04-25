#include "sandbox/TestInputs.hpp"

// Initialize
namespace HGEnzine
{
  namespace core
  {
    const WindowProperties g_mainWindowProperties = {
      800, 600,
      false
    };
    const std::string g_mainWindowTitle = "Game";
  }
}

int main(int /* argc */, char* /* argv */[])
{
  SandBox::TestInputs inputs;

  AppInstance.run();

  puts("Quit main()");

  return 0;
}

