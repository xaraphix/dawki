

#pragma once

#include <string_view>

#include <string_view>

#include "gtkmm/widget.h"
namespace Dwki
{
class AppContentPanel : public Gtk::Widget
{
public:
  AppContentPanel();
  static constexpr auto APP_CONTENT_NAME_PATH = "app.content.name";
  static constexpr auto APP_CONTENT_CSS_NODE_PATH = "app.content.style.node";
};
} // namespace Dwki
