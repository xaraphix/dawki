#pragma once
#include <glibmm/extraclassinit.h>
#include <glibmm/ustring.h>

namespace Dwki
{
class CssClassInitializer : public Glib::ExtraClassInit
{
 public:
  CssClassInitializer(const Glib::ustring& css_name);

 private:
  Glib::ustring m_css_name;
};
}  // namespace Dwki
