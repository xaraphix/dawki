
#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/button.h"

namespace Dwki
{
class MinimizeBtn
: public CssClassInitializer
, public Gtk::Button
{
public:
  MinimizeBtn();

protected:
};

} // namespace Dwki


