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
  }

  Application::~Application()
  {
    delete m_mainWindow;
    m_mainWindow = nullptr;

    puts("Application destructor called");
  }

  void Application::run()
  {
    m_mainWindow->open();
  }

  void Application::pause()
  {
    m_mainWindow->setIsRunning(false);
  }

  void Application::quit()
  {
    m_mainWindow->close();
  }
}

