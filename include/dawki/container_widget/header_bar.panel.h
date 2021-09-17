#pragma once

#include "dawki/common/css_initializer.h"
#include "dawki/container_widget/app_window_action_bar.panel.h"
#include "dawki/container_widget/content_action_bar.panel.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/text.h"
#include "gtkmm/widget.h"

namespace Dwki
{
class HeaderBarPanel : public CssClassInitializer, public Gtk::Widget
{
 public:
  HeaderBarPanel();

 protected:
  Dwki::AppWindowActionBarPanel appWindowActionBarPanel;
  Gtk::Text                     appTitle;
  Gtk::Text                     contentPanelTitle;
  Dwki::ContentActionBarPanel   contentActionBarPanel;

  void measure_vfunc(Gtk::Orientation orientation, int for_size, int& minimum,
                     int& natural, int& minimum_baseline,
                     int& natural_baseline) const override;
  void on_map() override;
  void on_unmap() override;
  void on_realize() override;
  void on_unrealize() override;
  void snapshot_vfunc(const Glib::RefPtr<Gtk::Snapshot>& snapshot) override;

  Gtk::Border                    m_padding;
  Glib::RefPtr<Gtk::CssProvider> m_refCssProvider;
};
}  // namespace Dwki
