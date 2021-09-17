#pragma once

#include "dawki/view/app_window_action_bar.panel.h"
#include "dawki/view/content_action_bar.panel.h"
#include "gtkmm/text.h"
#include "gtkmm/widget.h"
namespace Dwki
{
class HeaderBarPanel : public Gtk::Widget
{
 public:
  HeaderBarPanel();

 private:
  Dwki::AppWindowActionBarPanel appWindowActionBarPanel;
  Gtk::Text                     appTitle;
  Gtk::Text                     contentPanelTitle;
  Dwki::ContentActionBarPanel   contentActionBarPanel;
};
}  // namespace Dwki
