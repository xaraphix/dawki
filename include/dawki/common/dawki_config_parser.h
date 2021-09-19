#pragma once

#include "glibmm/ustring.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <memory>
#include <string>

namespace Dwki
{
class DawkiConfigParser
{
public:
  DawkiConfigParser(DawkiConfigParser const&)            = delete;
  DawkiConfigParser& operator-(DawkiConfigParser const&) = delete;

  static constexpr auto DAWKI_WIDGET_CONFIG_FILE_PATH = "/home/suyash/Code/dawki/dawki_widgets_config.json";

  static std::shared_ptr<DawkiConfigParser> Get()
  {
    static std::shared_ptr<DawkiConfigParser> p{ new DawkiConfigParser };
    return p;
  }

  template<typename T>
  static T const GetProperty(std::string prop)
  {
    return config.get<T>(prop);
  }

private:
  DawkiConfigParser();
  static boost::property_tree::ptree config;
};
}

namespace Dwki
{
template<typename T>
const auto GetProperty = DawkiConfigParser::GetProperty<T>;
}
