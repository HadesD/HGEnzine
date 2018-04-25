#ifndef __HGENZINE_INPUTS_MOUSE_HPP__
#define __HGENZINE_INPUTS_MOUSE_HPP__

#include "hg_enzine/inputs/Input.hpp"

#include <functional>
#include <vector>

struct SDL_MouseButtonEvent;
struct SDL_MouseMotionEvent;
struct SDL_MouseWheelEvent;

namespace HGEnzine::inputs
{
  class HGENZINE_API Mouse : public Input
  {
    public:
      using ButtonCallBack = std::function<void(const SDL_MouseButtonEvent& event)>;
      using MotionCallBack = std::function<void(const SDL_MouseMotionEvent& event)>;
      using WheelCallBack = std::function<void(const SDL_MouseWheelEvent& event)>;

    public:
      static std::vector<ButtonCallBack> onMouseDown;
      static std::vector<ButtonCallBack> onMouseUp;
      static std::vector<MotionCallBack> onMouseMove;
      static std::vector<WheelCallBack> onMouseWheel;
  };
}

#endif

