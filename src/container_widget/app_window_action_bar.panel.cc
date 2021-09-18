#include "dawki/container_widget/app_window_action_bar.panel.h"
#include "dawki/common/css_initializer.h"
#include "dawki/common/css_source_provider.h"
#include "glibmm/object.h"
#include "gtkmm/box.h"

Dwki::AppWindowActionBarPanel::AppWindowActionBarPanel()
: Glib::ObjectBase("AppWindowActionBarPanel")
, Dwki::CssClassInitializer("app-window-action-bar-panel")
, Gtk::Box(Gtk::Orientation::HORIZONTAL)
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  append(closeBtn);
  append(minimizeBtn);
  append(maximizeBtn);
}

