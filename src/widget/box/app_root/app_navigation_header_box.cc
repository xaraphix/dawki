#include "dawki/widget/box/app_root/app_navigation_header_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"
#include "gtkmm/enums.h"
#include "gtkmm/label.h"

Dwki::AppNavigationHeaderBox::AppNavigationHeaderBox()
: Widget<Gtk::Box>(GetProperty<Glib::ustring>(NAVIGATION_HEADER_BOX_NAME))
{
  this->widget.set_orientation(Gtk::Orientation::HORIZONTAL);
}
