#pragma once

#include "gtkmm/cssprovider.h"

namespace Dwki
{
/* make singleton */
class CssSourceProvider
{
 public:
  Glib::RefPtr<Gtk::CssProvider> getCssSource();

 protected:
  Glib::RefPtr<Gtk::CssProvider> m_refCssProvider;
  void on_parsing_error(const Glib::RefPtr<const Gtk::CssSection>& section,
                        const Glib::Error&                         error);
};
}  // namespace Dwki
