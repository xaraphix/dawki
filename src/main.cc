#include "dawki/common/dawki_config_parser.h"
#include "dawki/container_widget/app_root.window.h"
#include "dawki/logging/logging.h"

void
initializeDawki()
{
  Dwki::DawkiConfigParser::Get();
}

int
main(int argc, char* argv[])
{
  initializeDawki();
  auto app = Gtk::Application::create("in.suyashsingh");
  return app->make_window_and_run<AppRootWindow>(argc, argv);
}
