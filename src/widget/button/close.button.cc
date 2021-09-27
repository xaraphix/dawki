#include "dawki/widget/button/close.button.h"
#include "dawki/common/dawki_config_parser.h"

#include "glibmm/ustring.h"

using Dwki::CloseBtn;

CloseBtn::CloseBtn() : Button(*this, GetProperty<Glib::ustring>(WINDOW_CLOSE_ACTION_CSS_NODE_PATH)) {}
