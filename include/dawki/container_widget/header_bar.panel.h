#pragma once

#include "dawki/common/css_initializer.h"
#include "dawki/container_widget/app_window_action_bar.panel.h"
#include "dawki/container_widget/content_action_bar.panel.h"
#include "gtkmm/box.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/image.h"
#include "gtkmm/label.h"
#include "gtkmm/picture.h"
#include "gtkmm/widget.h"

#include <string_view>

namespace Dwki
{
class HeaderBarPanel
: public CssClassInitializer
, public Gtk::Box
{
public:
  HeaderBarPanel();

  static constexpr auto HEADER_BAR_NAME_PATH       = "app.headerBar.name";
  static constexpr auto HEADER_BAR_CSS_NODE_PATH   = "app.headerBar.style.node";
  static constexpr auto APP_TITLE_PATH             = "app.title.name";
  static constexpr auto APP_TITLE_CSS_CLASS_PATH   = "app.title.style.class";
  static constexpr auto APP_TITLE_XALIGN_PATH      = "app.title.style.xAlign";
  static constexpr auto DRAG_HANDLE_ICON_PATH      = "app.headerBar.dragHandle.icon";
  static constexpr auto DRAG_HANDLE_ICON_SIZE      = "app.headerBar.dragHandle.size";
  static constexpr auto DRAG_HANDLE_ICON_CSS_CLASS = "app.headerBar.dragHandle.style.cssClass";

protected:
  Dwki::AppWindowActionBarPanel appWindowActionBarPanel;
  Gtk::Label appTitle;
  Gtk::Image dragHandle;
  Dwki::ContentActionBarPanel contentActionBarPanel;
};
} // namespace Dwki
