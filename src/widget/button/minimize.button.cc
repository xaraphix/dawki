#include "dawki/widget/button/minimize.button.h"
#include "dawki/common/css_initializer.h"
#include "dawki/common/css_source_provider.h"
#include "gdkmm/cursor.h"
#include "glibmm/objectbase.h"
#include "gtkmm/button.h"

#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"

#include "glibmm/ustring.h"

Dwki::MinimizeBtn::MinimizeBtn()
: Glib::ObjectBase(GetProperty<std::string>(WINDOW_MIN_ACTION_NAME_PATH).c_str())
, CssClassInitializer(GetProperty<Glib::ustring>(WINDOW_MIN_ACTION_CSS_NODE_PATH))
, Gtk::Button()
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
}
