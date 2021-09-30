#pragma once

#include "dawki/widget/base/widget.h"
#include "gtkmm/box.h"
#include "gtkmm/window.h"

namespace Dwki
{
class AppContentHeaderBox : public Widget<Gtk::Box>
{
public:
  AppContentHeaderBox();
  static constexpr auto CONTENT_HEADER_BOX_NAME = "app.root.content.header.name";

private:
};
}
