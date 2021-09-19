

#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/widget.h"
#include <string_view>

namespace Dwki
{
class NavigationPanel
: public CssClassInitializer
, public Gtk::Widget
{
public:
  NavigationPanel();
  static constexpr auto NAVIGATION_NAME_PATH     = "app.navigation.name";
  static constexpr auto NAVIGATION_CSS_NODE_PATH = "app.navigation.style.node";

protected:
  Glib::RefPtr<Gtk::CssProvider> cssProvider;
};
} // namespace Dwki
