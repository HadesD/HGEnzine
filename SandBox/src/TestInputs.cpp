#include "sandbox/TestInputs.hpp"

namespace SandBox
{
  TestInputs::TestInputs()
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
  }
}

