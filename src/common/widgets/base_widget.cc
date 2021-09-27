#include "dawki/common/widgets/base_widget.h"
#include "dawki/common/css_source_provider.h"
#include "glibmm/objectbase.h"
#include "glibmm/ustring.h"
#include "gtkmm/widget.h"

using Dwki::BaseWidget;

BaseWidget::BaseWidget(Gtk::Widget& widget, const Glib::ustring className)
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  w                = widget.gobj();
  widget.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  widget.add_css_class(className);
}

void
BaseWidget::UpdateClass(const Glib::ustring className)
{
  auto cssClasses = gtk_widget_get_css_classes(w);
  for (char* c = *cssClasses; c; c = *++cssClasses)
  {
    gtk_widget_remove_css_class(w, c);
  }
  gtk_widget_add_css_class(w, className.c_str());
}
