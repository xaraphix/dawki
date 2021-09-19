#include "dawki/container_widget/app_window_action_bar.panel.h"
#include "dawki/common/css_initializer.h"
#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"
#include "dawki/constant/gui_constant.h"
#include "glibmm/object.h"
#include "glibmm/ustring.h"
#include "gtkmm/box.h"

Dwki::AppWindowActionBarPanel::AppWindowActionBarPanel()
: Glib::ObjectBase(GetProperty<std::string>(DwkiGuiConst::APP_WINDOW_ACTION_BAR_NAME_PATH).c_str())
, CssClassInitializer(GetProperty<Glib::ustring>(DwkiGuiConst::APP_WINDOW_ACTION_BAR_CSS_NODE_PATH))
, Gtk::Box(Gtk::Orientation::HORIZONTAL)
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  append(closeBtn);
  append(minimizeBtn);
  append(maximizeBtn);
}

