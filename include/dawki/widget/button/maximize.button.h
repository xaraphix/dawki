#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/button.h"
#include <string_view>

namespace Dwki
{
class MaximizeBtn : public Widget<Gtk::Button>
{
public:
  MaximizeBtn();
  static constexpr auto MAXIMIZE_BTN_NAME = "app.root.navigation.header.windowActions.maximize.name";

protected:
};

} // namespace Dwki
