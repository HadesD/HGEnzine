#ifndef __SANDBOX_GAME_HPP__
#define __SANDBOX_GAME_HPP__

#include <hg_enzine/HGEnzine.hpp>

namespace SandBox
{
  class Game : public HGEnzine::core::Application
  {
    public:
      Game();
      ~Game() override;

    public:
      void run() override;

    private:
      friend class HGEnzine::core::Application;
  };
}

#endif
