#include "dawki/container_widget/app_root.window.h"

AppRootWindow::AppRootWindow() 
{
  windowHandle.set_child(headerBarPanel);
  set_titlebar(windowHandle);
  windowContainer.set_orientation(Gtk::Orientation::HORIZONTAL);
  windowContainer.append(navigationPanel);
  windowContainer.append(contentPanel);
  set_child(windowContainer);
  set_default_size(800, 600);
}

