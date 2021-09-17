#include "dawki/widget/button/close.button.h"
#include "dawki/common/css_initializer.h"
#include "dawki/common/css_source_provider.h"
#include "glibmm/objectbase.h"
#include "gtkmm/button.h"
Dwki::CloseBtn::CloseBtn()
: Glib::ObjectBase("CloseBtn"), CssClassInitializer("close-btn"), Gtk::Button()
{
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  add_css_class("close-btn");
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
    
  set_action_name("Close");
}
