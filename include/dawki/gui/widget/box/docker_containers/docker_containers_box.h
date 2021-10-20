#pragma once

#include "dawki/gui/widget/base/widget.h"
#include "gtkmm/box.h"

namespace Dwki
{
class DockerContainersBox : public Widget<Gtk::Box>
{
public:
  DockerContainersBox();
  static constexpr auto DOCKER_CONTAINERS_BOX_ID = "app.root.content.dockerContainers.id";

private:
  void calculateLabelsToShow(int windowWidth);
};
}
