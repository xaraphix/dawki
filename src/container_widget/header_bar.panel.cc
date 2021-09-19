#include <string>
#include "gdkmm/general.h"
#include "gtkmm/snapshot.h"

#include "gtk/gtklabel.h"
#include "dawki/common/dawki_config_parser.h"
#include "dawki/container_widget/header_bar.panel.h"
#include "dawki/common/css_source_provider.h"
#include "dawki/logging/logging.h"

Dwki::HeaderBarPanel::HeaderBarPanel()
: Glib::ObjectBase("HeaderBarPanel")
, CssClassInitializer("header-bar-panel")
, Gtk::Box(Gtk::Orientation::HORIZONTAL)
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  appTitle.set_text("DAWKI");
  appTitle.add_css_class(Dwki::DawkiConfigParser::Get()->GetProperty("dawki-title"));
  appTitle.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  gtk_label_set_xalign(appTitle.gobj(), 0.0);
  append(appWindowActionBarPanel);
  append(appTitle);
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
}
