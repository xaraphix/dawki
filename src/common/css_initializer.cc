#include "dawki/common/css_initializer.h"

#include <gtk/gtk.h>
#include <gtkmm/widget.h>

namespace
{
using BaseObjectType = GtkWidget;
using BaseClassType  = GtkWidgetClass;

// Extra class init function.
void
class_init_function(void* g_class, void* class_data)
{
  g_return_if_fail(GTK_IS_WIDGET_CLASS(g_class));

  const auto klass    = static_cast<BaseClassType*>(g_class);
  const auto css_name = static_cast<Glib::ustring*>(class_data);

  gtk_widget_class_set_css_name(klass, css_name->c_str());
}

// Extra instance init function.
void
instance_init_function(GTypeInstance* instance, void* /* g_class */)
{
  g_return_if_fail(GTK_IS_WIDGET(instance));

  // Nothing to do here.
  // This extra instance init function just shows how such a function can
  // be added to a custom widget, if necessary.
}

} // anonymous namespace

Dwki::CssClassInitializer::CssClassInitializer(const Glib::ustring& css_name)
: Glib::ExtraClassInit(class_init_function, &m_css_name, instance_init_function), m_css_name(css_name)
{
}
