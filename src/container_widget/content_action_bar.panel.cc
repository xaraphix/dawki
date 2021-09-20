#include "dawki/container_widget/content_action_bar.panel.h"
#include "dawki/common/dawki_config_parser.h"
#include "gtk/gtklabel.h"

Dwki::ContentActionBarPanel::ContentActionBarPanel()
: Glib::ObjectBase(GetProperty<std::string>(CONTENT_ACTION_BAR_NAME_PATH).c_str())
, CssClassInitializer(GetProperty<Glib::ustring>(CONTENT_ACTION_BAR_CSS_NODE_PATH))
, Gtk::Box(Gtk::Orientation::HORIZONTAL)

{
  set_expand(true);
}
