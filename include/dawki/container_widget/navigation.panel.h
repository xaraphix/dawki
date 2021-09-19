

#pragma once

#include "dawki/common/css_initializer.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/widget.h"
namespace Dwki
{
class NavigationPanel : public CssClassInitializer, public Gtk::Widget
{
 public:
  NavigationPanel();

 protected:
  Gtk::Border                    m_padding;
  Glib::RefPtr<Gtk::CssProvider> m_refCssProvider;
};
}  // namespace Dwki
