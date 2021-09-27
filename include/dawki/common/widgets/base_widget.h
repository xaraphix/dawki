#pragma once
#include "glibmm/ustring.h"
#include "gtkmm/widget.h"

namespace Dwki
{
class BaseWidget
{
public:
  BaseWidget(Gtk::Widget& widget, const Glib::ustring className);
  void UpdateClass(const Glib::ustring className);

private:
  GtkWidget* w;
};
}
