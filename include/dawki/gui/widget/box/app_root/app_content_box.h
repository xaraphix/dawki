#pragma once

#include "dawki/gui/widget/base/widget.h"
#include "dawki/gui/widget/box/app_root/app_content_header_box.h"
#include "dawki/gui/widget/box/docker_containers/docker_containers_box.h"
#include "gtkmm/box.h"
#include "gtkmm/windowhandle.h"

namespace Dwki
{
class AppContentBox : public Widget<Gtk::Box>
{
public:
  AppContentBox();
  static constexpr auto CONTENT_BOX_ID = "app.root.content.id";

private:
  Widget<Gtk::WindowHandle> headerHandle;
  AppContentHeaderBox contentHeader;
  DockerContainersBox dockerContainers;
};
}
