#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"

namespace Dwki
{
class AppRootWindowBox : public Gtk::Window
{
public:
  AppRootWindowBox();
  static constexpr auto APP_WINDOW_NAME_PATH      = "app.name";
  static constexpr auto APP_WINDOW_CSS_NODE_NAME  = "app.style.node";
  static constexpr auto APP_WINDOW_CSS_NODE_CLASS = "app.style.cssClass";

private:
  Dwki::Widget<Gtk::Box> root;
  Dwki::Widget<Gtk::Box> ghostHeader;
};
}
