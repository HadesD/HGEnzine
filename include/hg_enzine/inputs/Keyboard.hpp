#ifndef __HGENZINE_INPUTS_KEYBOARD_HPP__
#define __HGENZINE_INPUTS_KEYBOARD_HPP__

#include "hg_enzine/inputs/Input.hpp"

#include <iostream>
#include <functional>
#include <vector>

struct SDL_KeyboardEvent;

namespace HGEnzine::inputs
{
  class HGENZINE_API Keyboard : public Input
  {
    public:
      using CallBack = std::function<void(const SDL_KeyboardEvent& event)>;

    public:
      enum class KeyCode
      {
      };

    public:
      bool keyState[1024];

    public:
      static std::vector<CallBack> onKeyDown;
      static std::vector<CallBack> onKeyUp;
  };
}

#endif

