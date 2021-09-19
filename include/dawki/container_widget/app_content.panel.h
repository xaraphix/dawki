

#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/box.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/widget.h"
#include <string_view>

#include "gtkmm/label.h"
namespace Dwki
{
class AppContentPanel
: public CssClassInitializer
, public Gtk::Box
{
public:
  AppContentPanel();
  static constexpr auto APP_CONTENT_NAME_PATH     = "app.content.name";
  static constexpr auto APP_CONTENT_CSS_NODE_PATH = "app.content.style.node";

protected:
  Glib::RefPtr<Gtk::CssProvider> cssProvider;
};
} // namespace Dwki
