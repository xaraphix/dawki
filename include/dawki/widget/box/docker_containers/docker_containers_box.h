#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/box.h"

namespace Dwki
{
class DockerContainersBox : public Widget<Gtk::Box>
{
public:
  DockerContainersBox();
  static constexpr auto DOCKER_CONTAINERS_BOX_NAME_PATH = "app.root.content.dockerContainers.name";

private:
};
}
