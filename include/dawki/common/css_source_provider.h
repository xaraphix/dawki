#pragma once

#include "gtkmm/cssprovider.h"

namespace Dwki
{
/* make singleton */
class CssSourceProvider
{
 public:
  Glib::RefPtr<Gtk::CssProvider> getCssSource();

 private:
  Glib::RefPtr<Gtk::CssProvider> m_refCssProvider;
};
}  // namespace Dwki
