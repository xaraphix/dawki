
#include "dawki/widget/button/maximize.button.h"
#include "dawki/common/css_initializer.h"
#include "dawki/common/css_source_provider.h"
#include "glibmm/objectbase.h"
#include "gtkmm/button.h"
Dwki::MaximizeBtn::MaximizeBtn()
: Glib::ObjectBase("MaximizeBtn"), CssClassInitializer("maximize-btn"), Gtk::Button()
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  add_css_class("maximize-btn");
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
    
  set_action_name("Maximize");
}
