#include "dawki/box_widget/root/app_content_box.h"
#include "dawki/box_widget/root/app_navigation_box.h"
#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"

#include "glibmm/ustring.h"
#include "gtkmm/box.h"

Dwki::AppContentBox::AppContentBox()
: Glib::ObjectBase(GetProperty<std::string>(APP_CONTENT_NAME_PATH).c_str())
, CssClassInitializer(GetProperty<Glib::ustring>(APP_CONTENT_CSS_NODE_PATH))
, Gtk::Box()
{
  cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  set_expand(true);
}
