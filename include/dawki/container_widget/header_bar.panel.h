#pragma once

#include "dawki/common/css_initializer.h"
#include "dawki/container_widget/app_window_action_bar.panel.h"
#include "dawki/container_widget/content_action_bar.panel.h"
#include "gtkmm/box.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/label.h"
#include "gtkmm/widget.h"
#include "gtkmm/windowhandle.h"

namespace Dwki
{
class HeaderBarPanel : public CssClassInitializer, public Gtk::Box
{
 public:
  HeaderBarPanel();

 protected:
  Dwki::AppWindowActionBarPanel appWindowActionBarPanel;
  Gtk::Label                     appTitle;
  Dwki::ContentActionBarPanel   contentActionBarPanel;
  Glib::RefPtr<Gtk::CssProvider> m_refCssProvider;

  void measure_vfunc(Gtk::Orientation orientation, int for_size, int& minimum,
                     int& natural, int& minimum_baseline,
                     int& natural_baseline) const override;
  void on_map() override;
  void on_unmap() override;
  void on_realize() override;
  void on_unrealize() override;

};
}  // namespace Dwki
