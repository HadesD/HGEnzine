#include "hg_enzine/core/Window.hpp"

#include "hg_enzine/inputs/Inputs.hpp"

#include <SDL.h>

namespace HGEnzine::core
{
  Window::Window(const std::string& title) :
    m_title(title)
  {
    m_properties.width = 800;
    m_properties.height = 600;
    m_properties.isFullScreen = false;

    this->init();
  }

  Window::Window(const std::string& title, const WindowProperties& properties) :
    m_title(title),
    m_properties(properties)
  {
    this->init();
  }

  Window::~Window()
  {
    puts("Window destructor called");

    if (m_window)
    {
      puts("SDL DestroyWindow()");
      SDL_DestroyWindow(m_window);
      puts("SDL DestroyWindow() end");
    }

    SDL_Quit();
  }

  bool Window::init()
  {
    m_isRunning = false;
    m_isPaused = true;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
      return false;
    }

    std::cout << "This Window: " << this << std::endl;

    return true;
  }

  void Window::open()
  {
    if (!m_window)
    {
      m_window = SDL_CreateWindow(
        m_title.data(),
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        m_properties.width,
        m_properties.height,
        SDL_WINDOW_OPENGL
        );

      if (!m_window)
      {
        printf("Error while creating window: %s", SDL_GetError());
        return;
      }

      m_renderer = SDL_CreateRenderer(m_window, -1, 0);

      // Render black
      SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
      SDL_RenderClear(m_renderer);
      SDL_RenderPresent(m_renderer);
    }

    m_isRunning = true;
  }

  void Window::update()
  {
    this->updateEvent();
  }

  void Window::updateEvent()
  {
    static SDL_Event event;

    while (SDL_PollEvent(&event))
    {
      switch(event.type)
      {
        // Check close
        case SDL_QUIT:
          this->close();
          break;

        case SDL_KEYDOWN:
          for (const auto& e : inputs::Keyboard::onKeyDown)
          {
            e(event.key);
          }
          printf("RUNNING?: %d\n", m_isRunning);
          break;
        case SDL_KEYUP:
          for (const auto& e : inputs::Keyboard::onKeyUp)
          {
            e(event.key);
          }
          break;

        case SDL_MOUSEBUTTONDOWN:
          for (const auto& e : inputs::Mouse::onMouseDown)
          {
            e(event.button);
          }
          break;
        case SDL_MOUSEBUTTONUP:
          for (const auto& e : inputs::Mouse::onMouseUp)
          {
            e(event.button);
          }
          break;
        case SDL_MOUSEMOTION:
          for (const auto& e : inputs::Mouse::onMouseMove)
          {
            e(event.motion);
          }
          break;
        case SDL_MOUSEWHEEL:
          for (const auto& e : inputs::Mouse::onMouseWheel)
          {
            e(event.wheel);
          }
          break;

        default:
          break;
      }
    }
  }

  void Window::close()
  {
    puts("Window close()");

    m_isRunning = false;
  }

  uint Window::getWidth() const
  {
    return m_properties.width;
  }

  uint Window::getHeight() const
  {
    return m_properties.height;
  }

  bool Window::getIsRunning() const
  {
    return m_isRunning;
  }

  void Window::setIsRunning(const bool isRunning)
  {
    m_isRunning = isRunning;
  }
}

