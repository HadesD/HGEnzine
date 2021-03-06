#include "sandbox/Game.hpp"

#include <memory>

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
  std::make_shared<SandBox::Game>()->run();

  puts("Quit main()");

  return 0;
}

