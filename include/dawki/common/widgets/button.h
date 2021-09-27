#include "dawki/common/css_initializer.h"
#include "dawki/common/widgets/base_widget.h"
#include "glibmm/ustring.h"
#include "gtkmm/button.h"
#include "gtkmm/widget.h"

namespace Dwki
{
class Button
: public Gtk::Button
, public BaseWidget
{
public:
  Button(Gtk::Widget& widget, const Glib::ustring className);
};
}
