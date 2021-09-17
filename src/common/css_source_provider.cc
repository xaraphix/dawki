#include "dawki/common/css_source_provider.h"

Glib::RefPtr<Gtk::CssProvider> Dwki::CssSourceProvider::getCssSource()
{
  m_refCssProvider->load_from_path("/home/suyash/Code/dawki/assets/dawki.css");
  return m_refCssProvider;
}
