#include "dawki/widget/button/maximize.button.h"
#include "dawki/common/dawki_config_parser.h"

#include "glibmm/ustring.h"

using Dwki::MaximizeBtn;

MaximizeBtn::MaximizeBtn() : Button(*this, GetProperty<Glib::ustring>(WINDOW_MAX_ACTION_CSS_NODE_PATH)) {}
