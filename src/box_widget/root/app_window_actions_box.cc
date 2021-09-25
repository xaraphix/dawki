#include "dawki/box_widget/root/app_window_actions_box.h"
#include "dawki/common/css_initializer.h"
#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"

#include "glibmm/object.h"
#include "glibmm/ustring.h"
#include "gtkmm/box.h"

Dwki::AppWindowActionsBox::AppWindowActionsBox()
: Glib::ObjectBase(GetProperty<std::string>(APP_WINDOW_ACTION_BAR_NAME_PATH).c_str())
, CssClassInitializer(GetProperty<Glib::ustring>(APP_WINDOW_ACTION_BAR_CSS_NODE_PATH))
, Gtk::Box(Gtk::Orientation::HORIZONTAL)
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  closeBtn.set_size_request(10, 10);
  closeBtn.set_expand(false);
  append(closeBtn);
  append(minimizeBtn);
  append(maximizeBtn);
}
