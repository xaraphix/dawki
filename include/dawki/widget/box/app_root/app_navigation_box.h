#pragma once

#include "dawki/widget/base/widget.h"
#include "dawki/widget/box/app_root/app_navigation_header_box.h"
#include "dawki/widget/box/app_root/app_navigation_items_box.h"
#include "gtkmm/box.h"
#include "gtkmm/windowhandle.h"

namespace Dwki
{
class AppNavigationBox : public Widget<Gtk::Box>
{
public:
  AppNavigationBox();
  static constexpr auto NAVIGATION_BOX_NAME_PATH = "app.root.navigation.name";

private:
  Widget<Gtk::WindowHandle> headerHandle;
  AppNavigationHeaderBox navigationHeader;
  AppNavigationItemsBox navigationItems;
};
}
