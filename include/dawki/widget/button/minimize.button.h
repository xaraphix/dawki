
#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/button.h"

namespace Dwki
{
class MinimizeBtn : public Widget<Gtk::Button>
{
public:
  MinimizeBtn();
  static constexpr auto WINDOW_MIN_ACTION_NAME_PATH     = "app.headerBar.windowActionBar.minBtn.style.node";
  static constexpr auto WINDOW_MIN_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.minBtn.style.node";

protected:
};

} // namespace Dwki
