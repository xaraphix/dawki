#include "dawki/view/app_root.window.h"

AppRootWindow::AppRootWindow() 
{
  unset_titlebar();
  maximize();
}

void AppRootWindow::title_bar()
{
  unset_titlebar();
}
