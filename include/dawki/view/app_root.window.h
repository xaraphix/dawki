#pragma once

#include <gtkmm/window.h>

class AppRootWindow : public Gtk::Window 
{
  public:
    AppRootWindow();

  private:
    void title_bar();
};
