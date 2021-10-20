#pragma once

#include "dawki/gui/widget/base/widget.h"
#include "gtkmm/button.h"
#include <string_view>

namespace Dwki
{
class CloseBtn : public Widget<Gtk::Button>
{
public:
  CloseBtn();
  static constexpr auto CLOSE_BTN_ID = "app.root.navigation.header.windowActions.close.id";

protected:
};

} // namespace Dwki
