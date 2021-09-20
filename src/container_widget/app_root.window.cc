#include "dawki/container_widget/app_root.window.h"
#include "dawki/common/css_source_provider.h"

Dwki::AppRootWindow::AppRootWindow()
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  windowHandle.set_child(headerBarPanel);
  set_titlebar(windowHandle);
  windowContainer.set_orientation(Gtk::Orientation::HORIZONTAL);
  windowContainer.append(navigationPanel);
  windowContainer.append(contentPanel);
  set_child(windowContainer);
  set_default_size(800, 600);
}
