#include "dawki/widget/button/close.button.h"
#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"
#include "glibmm/objectbase.h"
#include "gtkmm/button.h"

#include "glibmm/ustring.h"
#include "gtkmm/label.h"

Dwki::CloseBtn::CloseBtn()
: Glib::ObjectBase(GetProperty<std::string>(WINDOW_CLOSE_ACTION_NAME_PATH).c_str())
, CssClassInitializer(GetProperty<Glib::ustring>(WINDOW_CLOSE_ACTION_CSS_NODE_PATH))
, Gtk::Button()
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
}
