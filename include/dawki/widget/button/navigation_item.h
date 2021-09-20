
#pragma once

#include "dawki/common/css_initializer.h"
#include "glibmm/ustring.h"
#include "gtkmm/box.h"
#include "gtkmm/button.h"
#include "gtkmm/label.h"
#include "gtkmm/picture.h"
#include <string_view>

namespace Dwki
{
class NavigationItem
: public CssClassInitializer
, public Gtk::Box
{
public:
  NavigationItem();

  void SetIconCssClass(Glib::ustring const);
  void SetLabelText(Glib::ustring const);

  static constexpr auto WINDOW_CLOSE_ACTION_NAME_PATH     = "app.headerBar.windowActionBar.closeBtn.style.node";
  static constexpr auto WINDOW_CLOSE_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.closeBtn.style.node";

protected:
  Gtk::Picture icon;
  Gtk::Label label;
};

} // namespace Dwki
