
#include "dawki/container_widget/header_bar.panel.h"

#include "gtk/gtklabel.h"
#include <gdkmm/general.h>
#include <gtkmm/snapshot.h>

#include "dawki/common/css_source_provider.h"
#include "dawki/logging/logging.h"
#include "gtkmm/enums.h"

Dwki::HeaderBarPanel::HeaderBarPanel()
    : Glib::ObjectBase("HeaderBarPanel"),
      CssClassInitializer("header-bar-panel"),
      Gtk::Box(Gtk::Orientation::HORIZONTAL)
{
  m_refCssProvider = CssSourceProvider::Get()->getCssSource();
  appTitle.set_text("Dawki");
  appTitle.add_css_class("dawki-title");
  appTitle.get_style_context()->add_provider(m_refCssProvider,
                                    GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  
  gtk_label_set_xalign(appTitle.gobj(), 0.0);
  append(appTitle);
  add_css_class("header-bar-panel");
  get_style_context()->add_provider(m_refCssProvider,
                                    GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
}
