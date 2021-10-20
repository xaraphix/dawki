#include "dawki/gui/widget/box/app_root/app_content_box.h"
#include "dawki/core/logs/logs.h"
#include "dawki/gui/config/dawki_config_parser.h"
#include "glibmm/ustring.h"
#include "gtkmm/box.h"
#include "sigc++/adaptors/bind.h"

Dwki::AppContentBox::AppContentBox()
: Widget<Gtk::Box>(GetProperty<CORE_UI, Glib::ustring>(CONTENT_BOX_ID))
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
