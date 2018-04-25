#ifndef __HGENZINE_EVENTS_EVENT_HPP__
#define __HGENZINE_EVENTS_EVENT_HPP__

#include "hg_enzine/core/BeginPreprocessors.hpp"

#include <functional>

namespace HGEnzine::events
{
  class HGENZINE_API Event
  {
    public:
      virtual ~Event();

    public:
      virtual void update() = 0;
  };
}

#endif

