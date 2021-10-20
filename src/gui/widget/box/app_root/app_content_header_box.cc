#include "dawki/gui/widget/box/app_root/app_content_header_box.h"
#include "dawki/gui/config/dawki_config_parser.h"
#include "glibmm/ustring.h"

Dwki::AppContentHeaderBox::AppContentHeaderBox()
: Widget<Gtk::Box>(GetProperty<CORE_UI, Glib::ustring>(CONTENT_HEADER_BOX_ID))
{
}
