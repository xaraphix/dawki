
#include "dawki/widget/button/maximize.button.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"
#include "gtkmm/button.h"

using Dwki::MaximizeBtn;

MaximizeBtn::MaximizeBtn() : Widget<Gtk::Button>(GetProperty<CORE_UI, Glib::ustring>(MAXIMIZE_BTN_ID)) {}
