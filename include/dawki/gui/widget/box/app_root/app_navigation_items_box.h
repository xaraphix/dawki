#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"

namespace Dwki
{
class AppNavigationItemsBox : public Widget<Gtk::Box>
{
public:
  AppNavigationItemsBox();
  static constexpr auto NAVIGATION_ITEMS_BOX_ID = "app.root.navigation.items.id";

private:
  Widget<Gtk::Box> dockerContainersItemBox;
  Widget<Gtk::Box> dockerImagesItemBox;
};
}
