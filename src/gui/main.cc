#include "dawki/core/logs/logs.h"
#include "dawki/gui/config/dawki_config_parser.h"
#include "dawki/gui/widget/box/app_root/app_main_window.h"
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
  static auto constexpr APP_DOMAIN = "app.domain";
  auto app = Gtk::Application::create(Dwki::DawkiConfigParser::GetProperty<Dwki::CORE_UI, std::string>(APP_DOMAIN));
  return app->make_window_and_run<Dwki::AppMainWindow>(argc, argv);
}
