#ifndef __HGENZINE_WINDOW_HPP__
#define __HGENZINE_WINDOW_HPP__

#include "hg_enzine/core/BeginPreprocessors.hpp"

#include <string>
#include <vector>

struct SDL_Window;
struct SDL_Renderer;

namespace HGEnzine
{
  namespace inputs
  {
    class Input;
  }
}

namespace HGEnzine::core
{

  struct HGENZINE_API WindowProperties
  {
    // In pixel
    uint width, height;

    bool isFullScreen;
  };

  class HGENZINE_API Window final
  {
    public:
      using uint = unsigned int;

    private:
      std::string m_title;
      WindowProperties m_properties;
      SDL_Window* m_window;
      SDL_Renderer* m_renderer;
      bool m_isRunning;
      bool m_isPaused;

    public:
      Window(const std::string& title);
      Window(const std::string& title, const WindowProperties& properties);

      ~Window();

    private:
      bool init();
      void updateEvent();

    public:
      void open();
      void close();

    public:
      // Getter/Setter
      uint getWidth() const;
      uint getHeight() const;
      bool getIsFullScreen() const;
      void setIsRunning(const bool isRunning);
      bool getIsRunning() const;
  };
}

#endif

