#include <gdkmm/general.h>
#include <gtkmm/snapshot.h>
#include <string>

#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"
#include "dawki/container_widget/navigation.panel.h"

#include "glibmm/ustring.h"

Dwki::NavigationPanel::NavigationPanel()
    : Glib::ObjectBase(GetProperty<std::string>(NAVIGATION_NAME_PATH).c_str()),
      CssClassInitializer(GetProperty<Glib::ustring>(NAVIGATION_CSS_NODE_PATH)),
      Gtk::Widget()
{
  set_expand(false);
  m_refCssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(m_refCssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
}
