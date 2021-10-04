#pragma once

#include <memory>

#include "gtkmm/cssprovider.h"

namespace Dwki
{
/* make singleton */
class CssSourceProvider
{
public:
  CssSourceProvider(CssSourceProvider const&) = delete;
  CssSourceProvider& operator=(CssSourceProvider const&) = delete;

  static std::shared_ptr<CssSourceProvider> Get()
  {
    static std::shared_ptr<CssSourceProvider> p{ new CssSourceProvider };
    return p;
  }

  Glib::RefPtr<Gtk::CssProvider> getCssSource();
  static constexpr auto CSS_RESOURCE = "app.style.cssPath";

private:
  CssSourceProvider();

protected:
  Glib::RefPtr<Gtk::CssProvider> m_refCssProvider;
  void on_parsing_error(const Glib::RefPtr<const Gtk::CssSection>& section, const Glib::Error& error);
};
} // namespace Dwki
