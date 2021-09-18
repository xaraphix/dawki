#include <gdkmm/general.h>
#include <gtkmm/snapshot.h>

#include "dawki/container_widget/navigation.panel.h"
#include "dawki/common/css_source_provider.h"

Dwki::NavigationPanel::NavigationPanel()
    : Glib::ObjectBase("NavigationPanel"),
      CssClassInitializer("navigation-panel"),
      Gtk::Widget()

{
  set_expand(false);
  m_refCssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(m_refCssProvider,
                                    GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
}

void Dwki::NavigationPanel::measure_vfunc(Gtk::Orientation orientation,
                                         int /* for_size */, int& minimum,
                                         int& natural, int& minimum_baseline,
                                         int& natural_baseline) const
{
  if (orientation == Gtk::Orientation::HORIZONTAL) {
    minimum = 10;
    natural = 20;
  } else {
    minimum = 10;
    natural = 20;
  }

  // Don't use baseline alignment.
  minimum_baseline = -1;
  natural_baseline = -1;
}

void Dwki::NavigationPanel::on_map()
{
  // Call base class:
  Gtk::Widget::on_map();
}

void Dwki::NavigationPanel::on_unmap()
{
  // Call base class:
  Gtk::Widget::on_unmap();
}

void Dwki::NavigationPanel::on_realize()
{
  m_padding = get_style_context()->get_padding();
  // Call base class:
  Gtk::Widget::on_realize();
}

void Dwki::NavigationPanel::on_unrealize()
{
  // Call base class:
  Gtk::Widget::on_unrealize();
}

void Dwki::NavigationPanel::snapshot_vfunc(
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

