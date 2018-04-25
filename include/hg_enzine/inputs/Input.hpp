#ifndef __HGENZINE_INPUTS_INPUT_HPP__
#define __HGENZINE_INPUTS_INPUT_HPP__

#include "hg_enzine/core/BeginPreprocessors.hpp"

namespace HGEnzine::inputs
{
  class HGENZINE_API Input
  {
    public:
      virtual void update() = 0;
  };
}

#endif

