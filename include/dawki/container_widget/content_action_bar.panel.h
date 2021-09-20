
#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/box.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/image.h"
#include "gtkmm/label.h"
#include "gtkmm/widget.h"
#include <string_view>

namespace Dwki
{
class ContentActionBarPanel
: public CssClassInitializer
, public Gtk::Box
{
public:
  ContentActionBarPanel();
  static constexpr auto CONTENT_ACTION_BAR_NAME_PATH     = "app.headerBar.contentActionBar.name";
  static constexpr auto CONTENT_ACTION_BAR_CSS_NODE_PATH = "app.headerBar.contentActionBar.style.node";
};
} // namespace Dwki
