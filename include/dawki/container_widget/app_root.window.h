#pragma once

#include <gtkmm/window.h>

#include "dawki/container_widget/header_bar.panel.h"
#include "dawki/container_widget/app_content.panel.h"
#include "dawki/container_widget/navigation.panel.h"

class AppRootWindow : public Gtk::Window 
{
  public:
    AppRootWindow();

  private:
    Dwki::HeaderBarPanel headerBarPanel;
    Dwki::NavigationPanel navigationPanel;
    Dwki::AppContentPanel contentPanel;
};