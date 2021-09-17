#pragma once

#include <gtkmm/window.h>

#include "dawki/view/header_bar.panel.h"
#include "dawki/view/app_content.panel.h"
#include "dawki/view/navigation.panel.h"

class AppRootWindow : public Gtk::Window 
{
  public:
    AppRootWindow();

  private:
    Dwki::HeaderBarPanel headerBarPanel;
    Dwki::NavigationPanel navigationPanel;
    Dwki::AppContentPanel contentPanel;
};
