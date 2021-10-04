#pragma once

#include "dawki/widget/base/widget.h"
#include "dawki/widget/box/app_root/app_content_box.h"
#include "dawki/widget/box/app_root/app_navigation_box.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"

namespace Dwki
{
class AppRootBox : public Widget<Gtk::Box>
{
public:
  AppRootBox();
  static constexpr auto ROOT_ID = "app.root.id";

private:
  AppNavigationBox navigationBox;
  AppContentBox contentBox;
};
}
