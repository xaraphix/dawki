#include "dawki/gui/widget/box/app_root/app_navigation_box.h"
#include "dawki/gui/config/dawki_config_parser.h"
#include "glibmm/ustring.h"
#include "gtkmm/enums.h"

Dwki::AppNavigationBox::AppNavigationBox()
: Widget<Gtk::Box>(GetProperty<CORE_UI, Glib::ustring>(NAVIGATION_BOX_ID))
, headerHandle("navigation-draggable-header")
, navigationHeader()
, navigationItems()
{
  headerHandle.widget.set_child(navigationHeader.widget);
  this->widget.set_orientation(Gtk::Orientation::VERTICAL);
  this->widget.append(headerHandle.widget);
  this->widget.append(navigationItems.widget);
}
