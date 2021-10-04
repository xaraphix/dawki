#include "dawki/widget/box/app_root/app_content_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "dawki/logging/logging.h"
#include "glibmm/ustring.h"
#include "gtkmm/box.h"
#include "sigc++/adaptors/bind.h"

Dwki::AppContentBox::AppContentBox()
: Widget<Gtk::Box>(GetProperty<Glib::ustring>(CONTENT_BOX_ID))
, headerHandle("content-draggable-header")
, contentHeader()
, dockerContainers()
{
  headerHandle.widget.set_child(contentHeader.widget);
  this->widget.set_orientation(Gtk::Orientation::VERTICAL);
  this->widget.append(headerHandle.widget);
  this->widget.append(dockerContainers.widget);
  this->widget.set_expand(true);
}
