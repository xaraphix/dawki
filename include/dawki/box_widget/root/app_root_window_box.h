#pragma once

#include "dawki/box_widget/root/app_content_box.h"
#include "dawki/box_widget/root/app_navigation_box.h"
#include "dawki/common/css_initializer.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"
#include "gtkmm/windowhandle.h"

#include <string_view>
namespace Dwki
{
class AppRootWindowBox
: public Dwki::CssClassInitializer
, public Gtk::Window
{
public:
  AppRootWindowBox();
  static constexpr auto APP_WINDOW_NAME_PATH      = "app.name";
  static constexpr auto APP_WINDOW_CSS_NODE_NAME  = "app.style.node";
  static constexpr auto APP_WINDOW_CSS_NODE_CLASS = "app.style.cssClass";

private:
  Gtk::Box root;
  Dwki::AppNavigationBox navigation;
  Dwki::AppContentBox content;
};
}
