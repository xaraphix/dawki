#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/box.h"

#include "dawki/widget/button/close.button.h"
#include "dawki/widget/button/maximize.button.h"
#include "dawki/widget/button/minimize.button.h"

namespace Dwki
{
class AppWindowActionBarPanel
: public Dwki::CssClassInitializer
, public Gtk::Box
{
public:
  AppWindowActionBarPanel();

private:
  Dwki::MaximizeBtn maximizeBtn;
  Dwki::CloseBtn closeBtn;
  Dwki::MinimizeBtn minimizeBtn;
};
} // namespace Dwki
