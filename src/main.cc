#include "dawki/container_widget/app_root.window.h"

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("in.suyashsingh");
  return app->make_window_and_run<AppRootWindow>(argc, argv);
}

