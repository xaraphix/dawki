#include "dawki/widget/box/app_root/app_root_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"

Dwki::AppRootBox::AppRootBox()
: Widget<Gtk::Box>(GetProperty<CORE_UI, Glib::ustring>(ROOT_ID)), navigationBox(), contentBox()
{
  this->widget.append(navigationBox.widget);
  this->widget.append(contentBox.widget);
}
