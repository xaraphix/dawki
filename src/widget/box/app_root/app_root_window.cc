#include "dawki/config/dawki_config_parser.h"
#include "dawki/css/css_source_provider.h"
#include "dawki/logging/logging.h"
#include "dawki/widget/base/widget.h"
#include "dawki/widget/box/app_root/app_main_window.h"
#include "glibmm/ustring.h"
#include "gtkmm/label.h"
#include "gtkmm/window.h"

Dwki::AppMainWindow::AppMainWindow() : root(), ghostHeader("ghost-header")
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  add_css_class("main-window-dark");
  set_titlebar(ghostHeader.widget);
  set_child(root.widget);
  set_default_size(600, 400);
}
