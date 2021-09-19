#ifndef DAWKI_GUI_CONSTANTS
#define DAWKI_GUI_CONSTANTS

#pragma once

#include <string_view>

namespace Dwki
{
class DwkiGuiConst
{
public:
  static constexpr auto DAWKI_WIDGET_CONFIG_FILE_PATH =
    "/home/suyash/Code/dawki/dawki_widgets_config.json";
  static constexpr auto APP_CONTENT_NAME_PATH = "app.content.name";
  static constexpr auto APP_CONTENT_CSS_NODE_PATH = "app.content.style.node";
  static constexpr auto APP_WINDOW_NAME_PATH = "app.name";
  static constexpr auto APP_WINDOW_CSS_NODE_PATH = "app.style.node";
  static constexpr auto APP_TITLE_PATH = "app.title.name";
  static constexpr auto APP_TITLE_CSS_CLASS_PATH = "app.title.style.class";
  static constexpr auto APP_TITLE_XALIGN_PATH = "app.title.style.xAlign";
  static constexpr auto APP_WINDOW_ACTION_BAR_NAME_PATH = "app.headerBar.windowActionBar.name";
  static constexpr auto APP_WINDOW_ACTION_BAR_CSS_NODE_PATH = "app.headerBar.windowActionBar.style.node";
  static constexpr auto CONTENT_ACTION_BAR_NAME_PATH = "app.contentActionBar.name";
  static constexpr auto CONTENT_ACTION_BAR_CSS_NODE_PATH = "app.contentActionBar.style.node";
  static constexpr auto HEADER_BAR_NAME_PATH = "app.headerBar.name";
  static constexpr auto HEADER_BAR_CSS_NODE_PATH = "app.headerBar.style.node";
  static constexpr auto NAVIGATION_NAME_PATH = "app.navigation.name";
  static constexpr auto NAVIGATION_CSS_NODE_PATH = "app.navigation.style.node";
  static constexpr auto WINDOW_CLOSE_ACTION_NAME_PATH = "app.headerBar.windowActionBar.closeBtn.style.node";
  static constexpr auto WINDOW_CLOSE_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.closeBtn.style.node";
  static constexpr auto WINDOW_MIN_ACTION_NAME_PATH = "app.headerBar.windowActionBar.minBtn.style.node";
  static constexpr auto WINDOW_MIN_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.minBtn.style.node";
  static constexpr auto WINDOW_MAX_ACTION_NAME_PATH = "app.headerBar.windowActionBar.maxBtn.style.node";
  static constexpr auto WINDOW_MAX_ACTION_CSS_NODE_PATH = "app.headerBar.windowActionBar.maxBtn.style.node";
};
}
#endif
