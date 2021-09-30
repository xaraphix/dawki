#include "dawki/widget/box/app_root/app_content_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"

Dwki::AppContentBox::AppContentBox()
: Widget<Gtk::Box>(GetProperty<Glib::ustring>(CONTENT_BOX_NAME_PATH))
, headerHandle("content-draggable-header")
, contentHeader()
, dockerContainers()
{
  headerHandle.widget.set_child(contentHeader.widget);
  this->widget.set_orientation(Gtk::Orientation::VERTICAL);
  this->widget.append(headerHandle.widget);
  this->widget.append(dockerContainers.widget);
}
