#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/box.h"

#include "dawki/widget/button/close.button.h"
#include "dawki/widget/button/maximize.button.h"
#include "dawki/widget/button/minimize.button.h"
#include <string_view>

namespace Dwki
{
class AppWindowActionsBox
: public Dwki::CssClassInitializer
, public Gtk::Box
{
public:
  AppWindowActionsBox();

  static constexpr auto APP_WINDOW_ACTION_BAR_NAME_PATH     = "app.headerBar.windowActionBar.name";
  static constexpr auto APP_WINDOW_ACTION_BAR_CSS_NODE_PATH = "app.headerBar.windowActionBar.style.node";

private:
  Dwki::MaximizeBtn maximizeBtn;
  Dwki::CloseBtn closeBtn;
  Dwki::MinimizeBtn minimizeBtn;
};
} // namespace Dwki
