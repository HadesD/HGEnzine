#include "sandbox/Game.hpp"

#include "sandbox/TestInputs.hpp"

namespace SandBox
{
  Game::Game()
  {
    SandBox::TestInputs inputs;
  }

  Game::~Game()
  {
    puts("Game destructor()");
  }
}

