#include "dawki/css/css_source_provider.h"

#include "dawki/config/dawki_config_parser.h"
#include "dawki/logging/logging.h"

Dwki::CssSourceProvider::CssSourceProvider()
{
  m_refCssProvider = Gtk::CssProvider::create();
  m_refCssProvider->signal_parsing_error().connect(sigc::mem_fun(*this, &CssSourceProvider::on_parsing_error));
  m_refCssProvider->load_from_resource(Dwki::GetProperty<Glib::ustring>(CSS_RESOURCE_PATH));
}

Glib::RefPtr<Gtk::CssProvider>
Dwki::CssSourceProvider::getCssSource()
{
  return m_refCssProvider;
}

void
Dwki::CssSourceProvider::on_parsing_error(const Glib::RefPtr<const Gtk::CssSection>& section, const Glib::Error& error)
{
  LogErr << "on_parsing_error(): " << error.what();
  if (section)
  {
    const auto file = section->get_file();
    if (file)
    {
      LogErr << "  URI = " << file->get_uri();
    }

    auto start_location = section->get_start_location();
    auto end_location   = section->get_end_location();
    LogErr << "  start_line = " << start_location.get_lines() + 1 << ", end_line = " << end_location.get_lines() + 1;
    LogErr << "  start_position = " << start_location.get_line_chars()
           << ", end_position = " << end_location.get_line_chars();
  }
}
