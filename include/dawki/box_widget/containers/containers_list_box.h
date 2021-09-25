#include "dawki/common/css_initializer.h"
#include "gtkmm/box.h"
namespace Dwki
{
class ContainersListBox
: Gtk::Box
, Dwki::CssClassInitializer
{
public:
  ContainersListBox();

protected:
  Gtk::Box header;
  Gtk::Box items;
};
}
