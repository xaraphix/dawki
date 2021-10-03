#include "dawki/widget/box/docker_containers/docker_containers_box.h"
#include "dawki/widget/base/widget.h"
#include "gtkmm/box.h"
#include "gtkmm/label.h"

Dwki::DockerContainersBox::DockerContainersBox() : Widget<Gtk::Box>(DOCKER_CONTAINERS_BOX_NAME_PATH)
{

  auto labelBar       = Widget<Gtk::Box>("");
  auto nameLabel      = Widget<Gtk::Label>("");
  auto idLabel        = Widget<Gtk::Label>("");
  auto imageLabel     = Widget<Gtk::Label>("");
  auto createdOnLabel = Widget<Gtk::Label>("");
  auto statusLabel    = Widget<Gtk::Label>("");

  labelBar.widget.append(nameLabel.widget);
  labelBar.widget.append(idLabel.widget);
  labelBar.widget.append(imageLabel.widget);
  labelBar.widget.append(createdOnLabel.widget);
  labelBar.widget.append(statusLabel.widget);

  nameLabel.widget.set_text("TEXT");
  imageLabel.widget.set_text("TEXT");
  idLabel.widget.set_text("TEXT");
  createdOnLabel.widget.set_text("TEXT");
  statusLabel.widget.set_text("TEXT");

  this->widget.append(labelBar.widget);
}
