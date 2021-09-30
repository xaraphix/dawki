#include "dawki/widget/box/app_root/app_navigation_items_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"

Dwki::AppNavigationItemsBox::AppNavigationItemsBox()
: Widget<Gtk::Box>(GetProperty<Glib::ustring>(NAVIGATION_ITEMS_BOX_NAME_PATH))
, dockerContainersItemBox("")
, dockerImagesItemBox("")
{
  this->widget.set_size_request(100, 50);
  this->widget.set_hexpand(true);
}
