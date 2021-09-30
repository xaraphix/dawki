#pragma once

#include "glibmm/ustring.h"
#include "gtkmm/box.h"
#include "gtkmm/label.h"
#include "gtkmm/widget.h"
#include "gtkmm/windowhandle.h"

namespace Dwki
{
template<typename T>
class Widget
{
public:
  static_assert(std::is_base_of<Gtk::Widget, T>::value, "T1 must derive from Base");
  Widget(Glib::ustring const cssClass);
  void UpdateCssClass(Glib::ustring const cssClass);
  T widget;

protected:
  Glib::ustring cssClass;
  void initCssClass(Glib::ustring const cssClass);
};
}

template class Dwki::Widget<Gtk::WindowHandle>;
template class Dwki::Widget<Gtk::Box>;
template class Dwki::Widget<Gtk::Label>;
