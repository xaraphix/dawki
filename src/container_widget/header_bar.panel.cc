#include "gdkmm/general.h"
#include "glibmm/ustring.h"
#include "gtkmm/snapshot.h"
#include <giomm/resource.h>
#include "gio/gio.h"
#include "giomm/resource.h"
#include <string>

#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"

#include "dawki/container_widget/header_bar.panel.h"
#include "dawki/logging/logging.h"
#include "gtk/gtklabel.h"

Dwki::HeaderBarPanel::HeaderBarPanel()
: Glib::ObjectBase(GetProperty<std::string>(HEADER_BAR_NAME_PATH).c_str())
, CssClassInitializer(GetProperty<Glib::ustring>(HEADER_BAR_CSS_NODE_PATH))
, Gtk::Box(Gtk::Orientation::HORIZONTAL)
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  set_expand(true);

  appTitle.set_text(GetProperty<Glib::ustring>(APP_TITLE_PATH));
  appTitle.add_css_class(GetProperty<Glib::ustring>(APP_TITLE_CSS_CLASS_PATH));
  appTitle.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  gtk_label_set_xalign(appTitle.gobj(), GetProperty<float>(APP_TITLE_XALIGN_PATH));

  dragHandle.set_resource(GetProperty<std::string>(DRAG_HANDLE_ICON_PATH));

  append(appWindowActionBarPanel);
  append(appTitle);
  append(dragHandle);
}
