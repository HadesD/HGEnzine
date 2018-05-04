#ifndef __HGENZINE_CORE_APPLICATION_HPP__
#define __HGENZINE_CORE_APPLICATION_HPP__

#include "hg_enzine/core/BeginPreprocessors.hpp"

#include "hg_enzine/utils/Singleton.hpp"

#include <string>

namespace HGEnzine::core
{
  struct WindowProperties;
  class Window;

  extern HGENZINE_API const WindowProperties g_mainWindowProperties;
  extern HGENZINE_API const std::string g_mainWindowTitle;

  class HGENZINE_API Application final
  {
    private:
      Window* m_mainWindow;

    protected:
      Application();

    public:
      virtual ~Application();

    public:
      /**
       * App Loop
       */
      void run();
      void pause();
      void quit();

    public:
      Window* getMainWindow() const;

    public:
      static Application& getInstance();

    public:
      friend class utils::Singleton<Application>;
  };
}

#endif

