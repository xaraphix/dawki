#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/box.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/widget.h"
#include <string_view>

#include "gtkmm/label.h"
#include "gtkmm/windowhandle.h"
namespace Dwki
{
class AppContentBox
: public CssClassInitializer
, public Gtk::Box
{
public:
  AppContentBox();
  static constexpr auto APP_CONTENT_NAME_PATH     = "app.content.name";
  static constexpr auto APP_CONTENT_CSS_NODE_PATH = "app.content.style.node";

protected:
  Gtk::WindowHandle draggableHeader;
  Gtk::Box actionBar;
  Glib::RefPtr<Gtk::CssProvider> cssProvider;
};
} // namespace Dwki
