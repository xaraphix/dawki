#include "dawki/widget/button/close.button.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"
#include "gtkmm/button.h"

using Dwki::CloseBtn;

CloseBtn::CloseBtn() : Widget<Gtk::Button>(GetProperty<CORE_UI, Glib::ustring>(CLOSE_BTN_ID)) {}
