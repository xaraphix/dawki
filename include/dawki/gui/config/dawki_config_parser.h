#pragma once

#include "dawki/logging/logging.h"
#include "glibmm/ustring.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <memory>
#include <sstream>
#include <string>

namespace Dwki
{
class DawkiConfigParser
{
private:
  DawkiConfigParser();
  void initDawkiConfig();
  void initUserUIConfig();
  static boost::property_tree::ptree dawkiConfig;
  static boost::property_tree::ptree userUiConfig;
  static constexpr auto DAWKI_CONFIG_PATH = "app.config.dir";
  static constexpr auto UI_FILENAME       = "app.config.ui.filename";

public:
  enum ConfigType
  {
    CORE,
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
    switch (C)
    {
    case ConfigType::CORE:
      return dawkiConfig.get<T>(prop);
    case ConfigType::USER_UI:
      return userUiConfig.get<T>(prop);
    }
  }
};
}

namespace Dwki
{
template<DawkiConfigParser::ConfigType C, typename T>
const auto GetProperty = DawkiConfigParser::GetProperty<C, T>;
const auto CORE_UI     = DawkiConfigParser::ConfigType::CORE;
const auto USER_UI     = DawkiConfigParser::ConfigType::USER_UI;
}
