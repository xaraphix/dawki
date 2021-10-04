
#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/button.h"
#include <string_view>

namespace Dwki
{
class MinimizeBtn : public Widget<Gtk::Button>
{
public:
  MinimizeBtn();
  static constexpr auto MINIMIZE_BTN_ID = "app.root.navigation.header.windowActions.minimize.id";

protected:
};

} // namespace Dwki
