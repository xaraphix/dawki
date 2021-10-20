#pragma once

#include "dawki/gui/widget/base/widget.h"
#include "dawki/gui/widget/box/app_root/app_root_box.h"
#include "gtkmm/window.h"
#include "sigc++/connection.h"

namespace Dwki
{
class AppMainWindow : public Gtk::Window
{
public:
  AppMainWindow();
  static constexpr auto APP_WINDOW_ID = "app.name";

private:
  AppRootBox root;
  Dwki::Widget<Gtk::Box> ghostHeader;
  void pollSizeChange();
  bool onResize();
  int newWidth;
};
}
