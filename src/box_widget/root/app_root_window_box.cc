#include "dawki/box_widget/root/app_root_window_box.h"
#include "dawki/common/css_initializer.h"
#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"
#include "dawki/logging/logging.h"
#include "glibmm/objectbase.h"
#include "glibmm/ustring.h"
#include <string>

Dwki::AppRootWindowBox::AppRootWindowBox()
: Dwki::CssClassInitializer(GetProperty<Glib::ustring>(APP_WINDOW_CSS_NODE_NAME))
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  gtk_window_set_decorated(gobj(), false);

  root.set_orientation(Gtk::Orientation::HORIZONTAL);
  root.append(navigation);
  root.append(content);
  root.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  root.add_css_class(GetProperty<Glib::ustring>(APP_WINDOW_CSS_NODE_CLASS));

  set_child(root);
  set_default_size(1400, 600);
}
