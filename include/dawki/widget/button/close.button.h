
#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/button.h"

namespace Dwki
{
class CloseBtn
: public CssClassInitializer
, public Gtk::Button
{
public:
  CloseBtn();

protected:
};

} // namespace Dwki

