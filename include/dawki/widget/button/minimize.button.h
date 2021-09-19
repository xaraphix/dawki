
#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/button.h"
#include <string_view>

namespace Dwki
{
class MinimizeBtn
: public CssClassInitializer
, public Gtk::Button
{
public:
  MinimizeBtn();
  static constexpr auto WINDOW_MIN_ACTION_NAME_PATH     = "app.headerBar.windowActionBar.minBtn.style.node";
  static constexpr auto WINDOW_MIN_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.minBtn.style.node";

protected:
};

} // namespace Dwki
