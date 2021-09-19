
#pragma once

#include "gtkmm/widget.h"
#include <string_view>

namespace Dwki
{
class ContentActionBarPanel : public Gtk::Widget
{
public:
  ContentActionBarPanel();
  static constexpr auto CONTENT_ACTION_BAR_NAME_PATH     = "app.contentActionBar.name";
  static constexpr auto CONTENT_ACTION_BAR_CSS_NODE_PATH = "app.contentActionBar.style.node";
};
} // namespace Dwki
