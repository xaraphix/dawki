#pragma once

#include "dawki/common/css_initializer.h"
#include "glibmm/ustring.h"
#include "gtkmm/box.h"
#include "gtkmm/cssprovider.h"
#include "gtkmm/image.h"
#include "gtkmm/label.h"

namespace Dwki
{
class NavigationPanel
: public CssClassInitializer
, public Gtk::Box
{
public:
  NavigationPanel();

  static constexpr auto NAVIGATION_NAME_PATH                     = "app.navigation.name";
  static constexpr auto NAVIGATION_CSS_NODE_PATH                 = "app.navigation.style.node";
  static constexpr auto NAVIGATION_DOCKER_IMAGES_ICON_CSS_CLASS  = "app.navigation.dockerImages.icon.style.cssClass";
  static constexpr auto NAVIGATION_DOCKER_IMAGES_LABEL_CSS_CLASS = "app.navigation.dockerImages.label.style.cssClass";
  static constexpr auto NAVIGATION_DOCKER_IMAGES_LABEL_TEXT      = "app.navigation.dockerImages.label.name";
  static constexpr auto NAVIGATION_DOCKER_CONTAINERS_ICON_CSS_CLASS =
    "app.navigation.dockerContainers.icon.style.cssClass";
  static constexpr auto NAVIGATION_DOCKER_CONTAINERS_LABEL_CSS_CLASS =
    "app.navigation.dockerContainers.label.style.cssClass";
  static constexpr auto NAVIGATION_DOCKER_CONTAINERS_LABEL_TEXT = "app.navigation.dockerContainers.label.name";

protected:
  Gtk::Box dockerContainersBox;
  Gtk::Box dockerImagesBox;
  Gtk::Image dockerContainersIcon;
  Gtk::Label dockerContainersLabel;
  Gtk::Image dockerImagesIcon;
  Gtk::Label dockerImagesLabel;
};
} // namespace Dwki
