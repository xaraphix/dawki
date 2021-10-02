#pragma once

#include "dawki/widget/base/widget.h"
#include "dawki/widget/box/app_root/app_window_actions_box.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"

namespace Dwki
{
class AppNavigationHeaderBox : public Widget<Gtk::Box>
{
public:
  AppNavigationHeaderBox();
  static constexpr auto NAVIGATION_HEADER_BOX_NAME = "app.root.navigation.header.name";

private:
  AppWindowActionsBox windowActions;
};
}
