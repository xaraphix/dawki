#include "dawki/widget/box/app_root/app_content_header_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "glibmm/ustring.h"

Dwki::AppContentHeaderBox::AppContentHeaderBox() : Widget<Gtk::Box>(GetProperty<Glib::ustring>(CONTENT_HEADER_BOX_NAME))
{
  this->widget.set_size_request(100, 50);
  this->widget.set_hexpand(true);
}
