
#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/button.h"

namespace Dwki
{
class MaximizeBtn : public Widget<Gtk::Button>
{
public:
  MaximizeBtn();
  static constexpr auto WINDOW_MAX_ACTION_NAME_PATH     = "app.headerBar.windowActionBar.maxBtn.style.node";
  static constexpr auto WINDOW_MAX_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.maxBtn.style.node";

protected:
};

} // namespace Dwki
