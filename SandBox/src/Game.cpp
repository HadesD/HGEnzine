#include "sandbox/Game.hpp"

#include "sandbox/TestInputs.hpp"

namespace SandBox
{
  Game::Game() : HGEnzine::core::Application()
  {
  }

  Game::~Game()
  {
    puts("Game destructor()");
  }

  void Game::run()
  {
    SandBox::TestInputs inputs;
    HGEnzine::core::Application::run();
  }
}

