#include "dawki/gui/widget/button/minimize.button.h"
#include "dawki/gui/config/dawki_config_parser.h"
#include "glibmm/ustring.h"
#include "gtkmm/button.h"

using Dwki::MinimizeBtn;

MinimizeBtn::MinimizeBtn() : Widget<Gtk::Button>(GetProperty<CORE_UI, Glib::ustring>(MINIMIZE_BTN_ID)) {}
