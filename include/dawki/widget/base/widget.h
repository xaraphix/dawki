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
  static_assert(std::is_base_of<Gtk::Widget, T>::value, "T must be of type Gtk::Widget");
  Widget(Glib::ustring const name);
  void UpdateCssClass(Glib::ustring const newCssClass);
  T widget;

protected:
  Glib::ustring name;
  Glib::ustring cssClass;
  void initCssClass();
};
}

template class Dwki::Widget<Gtk::WindowHandle>;
template class Dwki::Widget<Gtk::Box>;
template class Dwki::Widget<Gtk::Label>;
