#include "dawki/common/dawki_config_parser.h"
#include "dawki/container_widget/app_root.window.h"
#include "dawki/logging/logging.h"
#include <string>

void
initializeDawki()
{
  Dwki::DawkiConfigParser::Get();
}

int
main(int argc, char* argv[])
{
  initializeDawki();
  static auto constexpr APP_DOMAIN_PATH = "app.domain";
  auto app = Gtk::Application::create(Dwki::DawkiConfigParser::GetProperty<std::string>(APP_DOMAIN_PATH));
  return app->make_window_and_run<Dwki::AppRootWindow>(argc, argv);
}
