#include "dawki/gui/widget/base/widget.h"
#include "dawki/gui/css/css_source_provider.h"
#include "glibmm/ustring.h"
#include "gtkmm/widget.h"
#include "pangomm/rectangle.h"

template<typename T>
Dwki::Widget<T>::Widget(Glib::ustring const name) : widget(), name(name), cssClass(name + "-dark")
{
  initCssClass();
}

template<class T>
void
Dwki::Widget<T>::initCssClass()
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  widget.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  widget.add_css_class(name);
  widget.add_css_class(cssClass);
}

template<typename T>
void
Dwki::Widget<T>::UpdateCssClass(Glib::ustring const newCssClass)
{
  widget.remove_css_class(cssClass);
  widget.add_css_class(newCssClass);
}
