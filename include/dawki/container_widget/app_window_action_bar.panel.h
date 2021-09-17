#pragma once

#include "gtkmm/widget.h"

#include "dawki/widget/button/close.button.h"
#include "dawki/widget/button/maximize.button.h"
#include "dawki/widget/button/minimize.button.h"

namespace Dwki
{
class AppWindowActionBarPanel : public Gtk::Widget
{
 public:
  AppWindowActionBarPanel();

 private:
  Dwki::MaximizeBtn maximizeBtn;
  Dwki::CloseBtn    closeBtn;
  Dwki::MinimizeBtn minimizeBtn;
};
}  // namespace Dwki
