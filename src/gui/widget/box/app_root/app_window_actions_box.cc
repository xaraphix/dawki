#include "dawki/gui/widget/box/app_root/app_window_actions_box.h"
#include "dawki/gui/config/dawki_config_parser.h"
#include "glibmm/ustring.h"
#include "gtkmm/enums.h"

Dwki::AppWindowActionsBox::AppWindowActionsBox()
: Widget<Gtk::Box>(GetProperty<CORE_UI, Glib::ustring>(WINDOW_ACTIONS_BOX_ID)), closeBtn(), minBtn(), maxBtn()
{
  widget.set_orientation(Gtk::Orientation::HORIZONTAL);
  widget.append(closeBtn.widget);
  widget.append(minBtn.widget);
  widget.append(maxBtn.widget);
}
