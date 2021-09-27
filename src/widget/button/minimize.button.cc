#include "dawki/widget/button/minimize.button.h"
#include "dawki/common/dawki_config_parser.h"

#include "glibmm/ustring.h"
#include "sigc++/adaptors/bind.h"

using Dwki::MinimizeBtn;

MinimizeBtn::MinimizeBtn() : Button(*this, GetProperty<Glib::ustring>(WINDOW_MIN_ACTION_CSS_NODE_PATH))
{
  signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &MinimizeBtn::UpdateClass), "dawki-min-btn-2"));
}
