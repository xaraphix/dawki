#pragma once

#include "dawki/gui/widget/base/widget.h"
#include "dawki/gui/widget/box/app_root/app_window_actions_box.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"

namespace Dwki
{
class AppNavigationHeaderBox : public Widget<Gtk::Box>
{
public:
  AppNavigationHeaderBox();
  static constexpr auto NAVIGATION_HEADER_BOX_ID = "app.root.navigation.header.id";

private:
  AppWindowActionsBox windowActions;
};
}
