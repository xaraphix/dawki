#include "dawki/config/dawki_config_parser.h"
#include "dawki/css/css_source_provider.h"
#include "dawki/logging/logging.h"
#include "dawki/store/dawki_store.h"
#include "dawki/widget/base/widget.h"
#include "dawki/widget/box/app_root/app_main_window.h"
#include "glibmm/ustring.h"
#include "gtk/gtk.h"
#include "gtkmm/label.h"
#include "gtkmm/window.h"
#include "sigc++/functors/mem_fun.h"

Dwki::AppMainWindow::AppMainWindow() : root(), ghostHeader("ghost-header")
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  add_css_class("main-window");
  add_css_class("main-window-dark");
  set_titlebar(ghostHeader.widget);
  set_child(root.widget);
  set_default_size(600, 400);
  property_default_width().signal_changed().connect(sigc::mem_fun(*this, &AppMainWindow::onResize));
}

void
Dwki::AppMainWindow::onResize()
{
  Dwki::DawkiStore::Get()->WindowWidthUpdatedSignal(property_default_width());
}
