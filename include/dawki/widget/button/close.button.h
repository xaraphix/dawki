
#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/button.h"
#include <string_view>

namespace Dwki
{
class CloseBtn : public Widget<Gtk::Button>
{
public:
  CloseBtn();
  static constexpr auto WINDOW_CLOSE_ACTION_NAME_PATH     = "app.headerBar.windowActionBar.closeBtn.style.node";
  static constexpr auto WINDOW_CLOSE_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.closeBtn.style.node";

protected:
};

} // namespace Dwki
