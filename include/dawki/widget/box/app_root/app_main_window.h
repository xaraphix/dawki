#pragma once

#include "dawki/widget/base/widget.h"
#include "dawki/widget/box/app_root/app_root_box.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"

namespace Dwki
{
class AppMainWindow : public Gtk::Window
{
public:
  AppMainWindow();
  static constexpr auto APP_WINDOW_NAME_PATH = "app.name";

private:
  AppRootBox root;
  Dwki::Widget<Gtk::Box> ghostHeader;
};
}
