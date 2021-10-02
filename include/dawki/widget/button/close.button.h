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
  static constexpr auto CLOSE_BTN_NAME = "app.root.navigation.header.windowActions.close.name";

protected:
};

} // namespace Dwki
