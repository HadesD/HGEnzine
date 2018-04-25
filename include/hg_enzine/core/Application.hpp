#ifndef __HGENZINE_CORE_APPLICATION_HPP__
#define __HGENZINE_CORE_APPLICATION_HPP__

#include "hg_enzine/core/BeginPreprocessors.hpp"

#include "hg_enzine/utils/Singleton.hpp"

#include <string>

namespace HGEnzine::core
{
  struct WindowProperties;
  class Window;

  extern const WindowProperties g_mainWindowProperties;
  extern const std::string g_mainWindowTitle;

  class HGENZINE_API Application final : public utils::Singleton<Application>
  {
    private:
      Window* m_mainWindow;

    private:
      Application();
      ~Application();

    public:
      /**
       * App Loop
       */
      void run();
      void pause();
      void quit();

    public:
      friend class utils::Singleton<Application>;
  };
}

#define AppInstance ::HGEnzine::core::Application::getInstance()

#endif

