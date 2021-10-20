#pragma once

#include "dawki/gui/widget/base/widget.h"
#include "dawki/gui/widget/button/close.button.h"
#include "dawki/gui/widget/button/maximize.button.h"
#include "dawki/gui/widget/button/minimize.button.h"
#include "gtkmm/box.h"

namespace Dwki
{
class AppWindowActionsBox : public Widget<Gtk::Box>
{
public:
  AppWindowActionsBox();
  static constexpr auto WINDOW_ACTIONS_BOX_ID = "app.root.navigation.header.windowActions.id";

private:
  CloseBtn closeBtn;
  MinimizeBtn minBtn;
  MaximizeBtn maxBtn;
};
}
