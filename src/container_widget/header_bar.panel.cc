
#include "dawki/container_widget/header_bar.panel.h"

#include <gdkmm/general.h>
#include <gtkmm/snapshot.h>

#include "dawki/common/css_source_provider.h"
#include "dawki/logging/logging.h"

Dwki::HeaderBarPanel::HeaderBarPanel()
    : Glib::ObjectBase("HeaderBarPanel"),
      CssClassInitializer("header-bar-panel"),
      Gtk::Widget(),
      m_padding()
{
  add_css_class("header-bar");
  appTitle.set_text("Test");
  set_expand(true);
  m_refCssProvider = CssSourceProvider().getCssSource();
}

void Dwki::HeaderBarPanel::measure_vfunc(Gtk::Orientation orientation,
                                         int /* for_size */, int& minimum,
                                         int& natural, int& minimum_baseline,
                                         int& natural_baseline) const
{
  if (orientation == Gtk::Orientation::HORIZONTAL) {
    minimum = 60;
    natural = 100;
  } else {
    minimum = 50;
    natural = 70;
  }

  // Don't use baseline alignment.
  minimum_baseline = -1;
  natural_baseline = -1;
}

void Dwki::HeaderBarPanel::on_map()
{
  // Call base class:
  Gtk::Widget::on_map();
}

void Dwki::HeaderBarPanel::on_unmap()
{
  // Call base class:
  Gtk::Widget::on_unmap();
}

void Dwki::HeaderBarPanel::on_realize()
{
  m_padding = get_style_context()->get_padding();
  // Call base class:
  Gtk::Widget::on_realize();
}

void Dwki::HeaderBarPanel::on_unrealize()
{
  // Call base class:
  Gtk::Widget::on_unrealize();
}

void Dwki::HeaderBarPanel::snapshot_vfunc(
    const Glib::RefPtr<Gtk::Snapshot>& snapshot)
{
  const auto           allocation = get_allocation();
  const Gdk::Rectangle rect(0, 0, allocation.get_width(),
                            allocation.get_height());
  auto                 refStyleContext = get_style_context();

  // Create a cairo context to draw on.
  auto cr = snapshot->append_cairo(rect);

  // paint the background
  refStyleContext->render_background(
      cr, -m_padding.get_left(), -m_padding.get_top(), allocation.get_width(),
      allocation.get_height());
}
