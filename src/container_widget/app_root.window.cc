#include "dawki/container_widget/app_root.window.h"

AppRootWindow::AppRootWindow() 
{
  set_titlebar(headerBarPanel);
  windowContainer.set_orientation(Gtk::Orientation::HORIZONTAL);
  windowContainer.append(navigationPanel);
  windowContainer.append(contentPanel);
  set_child(windowContainer);
  set_default_size(800, 600);
}

