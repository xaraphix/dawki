#include "dawki/box_widget/containers/containers_list.h"
#include "dawki/common/css_initializer.h"
#include "gtkmm/box.h"
#include "gtkmm/windowhandle.h"

namespace Dwki
{
class ContainersRootBox
: public Dwki::CssClassInitializer
, public Gtk::Box
{
public:
  ContainersRootBox();

  static constexpr auto DOCKER_CONTAINERS_NAME_PATH     = "app.navigation.name";
  static constexpr auto DOCKER_CONTAINERS_CSS_NODE_PATH = "app.navigation.style.node";

protected:
  Gtk::WindowHandle draggableHeader;
  Gtk::Box actionsBox;
  Dwki::ContainersListBox dockerContainersBox;
};
} // namespace Dwki
