

#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/widget.h"
namespace Dwki
{
class NavigationPanel : public CssClassInitializer, public Gtk::Widget
{
 public:
  NavigationPanel();

 protected:
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
