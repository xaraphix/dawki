#pragma once

#include "dawki/container_widget/app_content.panel.h"
#include "dawki/container_widget/header_bar.panel.h"
#include "dawki/container_widget/navigation.panel.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"
#include "gtkmm/windowhandle.h"

#include <string_view>
namespace Dwki
{
class AppRootWindow : public Gtk::Window
{
public:
  AppRootWindow();
  static constexpr auto APP_WINDOW_NAME_PATH     = "app.name";
  static constexpr auto APP_WINDOW_CSS_NODE_PATH = "app.style.node";

private:
  Gtk::WindowHandle windowHandle;
  Dwki::HeaderBarPanel headerBar;
  Gtk::Box appHeaderContainer;
  Gtk::Box appBodyContainer;
  Gtk::Box appContainer;
  Dwki::NavigationPanel navigationPanel;
  Dwki::AppContentPanel contentPanel;
};
}
