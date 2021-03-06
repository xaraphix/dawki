#pragma once

#include "dawki/gui/widget/base/widget.h"
#include "gtkmm/button.h"
#include <string_view>

namespace Dwki
{
class MaximizeBtn : public Widget<Gtk::Button>
{
public:
  MaximizeBtn();
  static constexpr auto MAXIMIZE_BTN_ID = "app.root.navigation.header.windowActions.maximize.id";

protected:
};

} // namespace Dwki
