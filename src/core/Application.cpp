#include "hg_enzine/core/Application.hpp"

#include "hg_enzine/core/Window.hpp"

#include <iostream>

namespace HGEnzine::core
{
  Application::Application()
  {
    m_mainWindow = new Window(
      g_mainWindowTitle,
      g_mainWindowProperties
      );
    std::cout << "This Window: " << &m_mainWindow << std::endl;
    std::cout << "This App: " << this << std::endl;
  }

  Application::~Application()
  {
    delete m_mainWindow;

    puts("Application destructor called");
  }

  void Application::run()
  {
    m_mainWindow->open();

    while(m_mainWindow->getIsRunning())
    {
      m_mainWindow->update();
    }
  }

  void Application::pause()
  {
    m_mainWindow->setIsRunning(false);
  }

  void Application::quit()
  {
    puts("Application quit()");

    m_mainWindow->close();
  }

  Window* Application::getMainWindow() const
  {
    return m_mainWindow;
  }
}

