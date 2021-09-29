#include "dawki/widget/base/widget.h"
#include "dawki/css/css_source_provider.h"
#include "glibmm/ustring.h"
#include "gtkmm/widget.h"
#include "pangomm/rectangle.h"

template<typename T>
Dwki::Widget<T>::Widget(Glib::ustring const cssClass) : widget(), cssClass(cssClass)
{
  initCssClass(cssClass);
}

template<class T>
void
Dwki::Widget<T>::initCssClass(Glib::ustring const cssClass)
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  widget.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  widget.add_css_class(cssClass);
}

template<typename T>
void
Dwki::Widget<T>::UpdateCssClass(Glib::ustring const cssClass)
{
  auto classes = widget.get_css_classes();
  for (auto c : classes)
  {
    widget.remove_css_class(c);
  }
  widget.add_css_class(cssClass);
}
