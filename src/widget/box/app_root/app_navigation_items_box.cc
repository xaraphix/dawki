#include "dawki/widget/box/app_root/app_navigation_items_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"

Dwki::AppNavigationItemsBox::AppNavigationItemsBox()
: Widget<Gtk::Box>(GetProperty<Glib::ustring>(NAVIGATION_ITEMS_BOX_ID))
, dockerContainersItemBox("")
, dockerImagesItemBox("")
{
}
