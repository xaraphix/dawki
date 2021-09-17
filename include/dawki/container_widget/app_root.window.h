#pragma once

#include "dawki/container_widget/app_content.panel.h"
#include "dawki/container_widget/header_bar.panel.h"
#include "dawki/container_widget/navigation.panel.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"

class AppRootWindow : public Gtk::Window
{
 public:
  AppRootWindow();

 private:
  Gtk::WindowHandle     windowHandle;
  Dwki::HeaderBarPanel  headerBarPanel;
  Gtk::Box              windowContainer;
  Dwki::NavigationPanel navigationPanel;
  Dwki::AppContentPanel contentPanel;
};
