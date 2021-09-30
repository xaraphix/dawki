#pragma once

#include "dawki/widget/base/widget.h"
#include "dawki/widget/box/app_root/app_content_header_box.h"
#include "dawki/widget/box/docker_containers/docker_containers_box.h"
#include "gtkmm/box.h"
#include "gtkmm/windowhandle.h"

namespace Dwki
{
class AppContentBox : public Widget<Gtk::Box>
{
public:
  AppContentBox();
  static constexpr auto CONTENT_BOX_NAME_PATH = "app.root.content.name";

private:
  Widget<Gtk::WindowHandle> headerHandle;
  AppContentHeaderBox contentHeader;
  DockerContainersBox dockerContainers;
};
}
