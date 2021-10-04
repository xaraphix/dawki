#include "dawki/widget/box/app_root/app_navigation_header_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "dawki/widget/box/app_root/app_window_actions_box.h"
#include "glibmm/ustring.h"

Dwki::AppNavigationHeaderBox::AppNavigationHeaderBox()
: Widget<Gtk::Box>(GetProperty<CORE_UI, Glib::ustring>(NAVIGATION_HEADER_BOX_ID)), windowActions()
{
  widget.set_orientation(Gtk::Orientation::HORIZONTAL);
  widget.append(windowActions.widget);
}
