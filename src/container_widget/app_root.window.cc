#include "dawki/container_widget/app_root.window.h"
#include "dawki/common/css_source_provider.h"
#include "dawki/logging/logging.h"

Dwki::AppRootWindow::AppRootWindow()
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  headerBar.set_expand(false);
  windowHandle.set_child(headerBar);
  windowHandle.set_expand(true);
  gtk_window_set_decorated(gobj(), false);
  appContainer.set_orientation(Gtk::Orientation::VERTICAL);
  appHeaderContainer.append(windowHandle);
  appHeaderContainer.set_expand(false);
  appBodyContainer.set_orientation(Gtk::Orientation::HORIZONTAL);
  appBodyContainer.append(navigationPanel);
  appBodyContainer.append(contentPanel);
  appContainer.append(appHeaderContainer);
  appContainer.append(appBodyContainer);
  set_child(appContainer);
  set_default_size(800, 600);
}
