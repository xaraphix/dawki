#include "dawki/widget/box/app_root/app_root_window_box.h"
#include "dawki/config/dawki_config_parser.h"
#include "dawki/logging/logging.h"
#include "dawki/widget/base/widget.h"
#include "glibmm/ustring.h"
#include "gtkmm/label.h"
#include "gtkmm/window.h"

Dwki::AppRootWindowBox::AppRootWindowBox()
: root(GetProperty<Glib::ustring>(APP_WINDOW_CSS_NODE_CLASS))
, ghostHeader(GetProperty<Glib::ustring>(APP_WINDOW_CSS_NODE_CLASS))
{
}
