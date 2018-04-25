#include "hg_enzine/HGEnzine.hpp"

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

  namespace inputs
  {
  }
}

int main(int /* argc */, char* /* argv */[])
{
  // TEST
  using namespace HGEnzine::inputs;
  Keyboard::onKeyDown.push_back([&](const SDL_KeyboardEvent& e){
    if (e.keysym.sym == SDLK_q)
    {
      AppInstance.quit();
    }
  });
  Keyboard::onKeyDown.push_back([&](const SDL_KeyboardEvent& event){
    printf("KeyCode: %d\n", event.keysym.sym);
  });
  Keyboard::onKeyUp.push_back([&](const SDL_KeyboardEvent& event){
    printf("KeyCode: %d\n", event.keysym.sym);
  });
  Mouse::onMouseDown.push_back([&](const SDL_MouseButtonEvent& event){
    printf("Button: %d, x: %d, y: %d\n", event.button, event.x, event.y);
  });
  Mouse::onMouseUp.push_back([&](const SDL_MouseButtonEvent& event){
    printf("Button: %d, x: %d, y: %d\n", event.button, event.x, event.y);
  });
  Mouse::onMouseMove.push_back([&](const SDL_MouseMotionEvent& event){
    printf("MouseMove - State: %d, x: %d, y: %d\n", event.state, event.x, event.y);
  });
  Mouse::onMouseWheel.push_back([&](const SDL_MouseWheelEvent& event){
    printf("Wheel(Scroll): %d, x: %d, y: %d\n", event.type, event.x, event.y);
  });
  // TEST end

  AppInstance.run();

  puts("Quit main()");

  return 0;
}

