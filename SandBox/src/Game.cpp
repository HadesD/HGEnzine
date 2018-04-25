#include "sandbox/Game.hpp"

#include "sandbox/TestInputs.hpp"

namespace SandBox
{
  Game::Game() : HGEnzine::core::Application()
  {
    SandBox::TestInputs inputs;
  }

  Game::~Game()
  {
    puts("Game destructor()");
  }

  void Game::run()
  {
    HGEnzine::core::Application::run();
    puts("Game run() end");
  }
}

