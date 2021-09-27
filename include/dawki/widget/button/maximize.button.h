
#pragma once

#include "dawki/common/widgets/button.h"
#include "gtkmm/button.h"
#include <string_view>

namespace Dwki
{
class MaximizeBtn : public Button
{
public:
  MaximizeBtn();
  static constexpr auto WINDOW_MAX_ACTION_NAME_PATH     = "app.headerBar.windowActionBar.maxBtn.style.node";
  static constexpr auto WINDOW_MAX_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.maxBtn.style.node";

protected:
};

} // namespace Dwki
