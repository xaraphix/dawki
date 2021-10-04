#include "dawki/widget/button/minimize.button.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"
#include "gtkmm/button.h"

using Dwki::MinimizeBtn;

MinimizeBtn::MinimizeBtn() : Widget<Gtk::Button>(GetProperty<Glib::ustring>(MINIMIZE_BTN_ID)) {}
