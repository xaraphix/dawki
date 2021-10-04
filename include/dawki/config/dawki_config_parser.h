#pragma once

#include "dawki/logging/logging.h"
#include "glibmm/ustring.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <memory>
#include <string>
#include <type_traits>

namespace Dwki
{
class DawkiConfigParser
{
private:
  DawkiConfigParser();
  static boost::property_tree::ptree dawkiUiConfig;

public:
  enum ConfigType
  {
    CORE_UI,
    USER_UI
  };
  DawkiConfigParser(DawkiConfigParser const&) = delete;
  DawkiConfigParser& operator=(DawkiConfigParser const&) = delete;

  static std::shared_ptr<DawkiConfigParser> Get()
  {
    static std::shared_ptr<DawkiConfigParser> p{ new DawkiConfigParser };
    return p;
  }

  template<ConfigType C, typename T>
  static T const GetProperty(std::string prop)
  {
    if (C == ConfigType::CORE_UI)
    {
      return dawkiUiConfig.get<T>(prop);
    }
  }
};
}

namespace Dwki
{
template<DawkiConfigParser::ConfigType C, typename T>
const auto GetProperty = DawkiConfigParser::GetProperty<C, T>;
const auto CORE_UI     = DawkiConfigParser::ConfigType::CORE_UI;
const auto USER_UI     = DawkiConfigParser::ConfigType::USER_UI;

}
