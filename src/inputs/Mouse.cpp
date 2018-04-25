#include "hg_enzine/inputs/Mouse.hpp"

namespace HGEnzine::inputs
{
  std::vector<Mouse::ButtonCallBack> Mouse::onMouseDown;
  std::vector<Mouse::ButtonCallBack> Mouse::onMouseUp;
  std::vector<Mouse::MotionCallBack> Mouse::onMouseMove;
  std::vector<Mouse::WheelCallBack> Mouse::onMouseWheel;
}

