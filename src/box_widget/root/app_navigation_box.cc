#include <string>

#include "dawki/box_widget/root/app_navigation_box.h"
#include "dawki/common/css_source_provider.h"
#include "dawki/common/dawki_config_parser.h"

#include "glibmm/ustring.h"
#include "gtkmm/box.h"
#include "gtkmm/enums.h"

Dwki::AppNavigationBox::AppNavigationBox()
: Glib::ObjectBase(GetProperty<std::string>(NAVIGATION_NAME_PATH).c_str())
, CssClassInitializer(GetProperty<Glib::ustring>(NAVIGATION_CSS_NODE_PATH))
, Gtk::Box()
{
  set_orientation(Gtk::Orientation::VERTICAL);
  set_expand(false);
  auto cssProvider = CssSourceProvider::Get()->getCssSource();
  get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  draggableHeader.set_child(windowActions);
  draggableHeader.set_expand(false);
  draggableHeader.set_cursor("move");

  dockerContainersIcon.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  dockerContainersLabel.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  dockerImagesIcon.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  dockerImagesLabel.get_style_context()->add_provider(cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  dockerContainersIcon.add_css_class(GetProperty<Glib::ustring>(NAVIGATION_DOCKER_CONTAINERS_ICON_CSS_CLASS));
  dockerContainersLabel.add_css_class(GetProperty<Glib::ustring>(NAVIGATION_DOCKER_CONTAINERS_LABEL_CSS_CLASS));
  dockerImagesIcon.add_css_class(GetProperty<Glib::ustring>(NAVIGATION_DOCKER_IMAGES_ICON_CSS_CLASS));
  dockerImagesLabel.add_css_class(GetProperty<Glib::ustring>(NAVIGATION_DOCKER_IMAGES_LABEL_CSS_CLASS));

  dockerImagesLabel.set_xalign(1);
  dockerContainersLabel.set_xalign(1);
  dockerImagesLabel.set_text(GetProperty<Glib::ustring>(NAVIGATION_DOCKER_IMAGES_LABEL_TEXT));
  dockerContainersLabel.set_text(GetProperty<Glib::ustring>(NAVIGATION_DOCKER_CONTAINERS_LABEL_TEXT));

  dockerContainersBox.set_orientation(Gtk::Orientation::HORIZONTAL);
  dockerImagesBox.set_orientation(Gtk::Orientation::HORIZONTAL);

  dockerContainersBox.append(dockerContainersIcon);
  dockerContainersBox.append(dockerContainersLabel);
  dockerImagesBox.append(dockerImagesIcon);
  dockerImagesBox.append(dockerImagesLabel);

  append(draggableHeader);
  append(dockerContainersBox);
  append(dockerImagesBox);
}
