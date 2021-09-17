
#include "dawki/container_widget/header_bar.panel.h"

#include <gdkmm/general.h>
#include <gtkmm/snapshot.h>

#include "dawki/common/css_source_provider.h"
#include "dawki/logging/logging.h"
#include "gtkmm/enums.h"

Dwki::HeaderBarPanel::HeaderBarPanel()
    : Glib::ObjectBase("HeaderBarPanel"),
      CssClassInitializer("header-bar-panel"),
      Gtk::Box(Gtk::Orientation::HORIZONTAL)
{
  m_refCssProvider = CssSourceProvider::Get()->getCssSource();
  appTitle.set_text("Dawki");
  appTitle.add_css_class("dawki-title");
  appTitle.get_style_context()->add_provider(m_refCssProvider,
                                    GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  append(appTitle);
  add_css_class("header-bar-panel");
  get_style_context()->add_provider(m_refCssProvider,
                                    GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
}

void Dwki::HeaderBarPanel::measure_vfunc(Gtk::Orientation orientation,
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

void Dwki::HeaderBarPanel::on_realize() { Gtk::Widget::on_realize(); }

void Dwki::HeaderBarPanel::on_unrealize()
{
  // Call base class:
  Gtk::Widget::on_unrealize();
}
