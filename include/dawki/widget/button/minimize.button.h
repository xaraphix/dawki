
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
  static constexpr auto MINIMIZE_BTN_NAME = "app.root.navigation.header.windowActions.minimize.name";

protected:
};

} // namespace Dwki
