#include "dawki/config/dawki_config_parser.h"
#include "dawki/logging/logging.h"
#include <boost/foreach.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>

boost::property_tree::ptree Dwki::DawkiConfigParser::dawkiConfig  = boost::property_tree::ptree{};
boost::property_tree::ptree Dwki::DawkiConfigParser::userUiConfig = boost::property_tree::ptree{};

extern char _binary_src_config_dawki_config_json_start[];
extern char _binary_src_config_dawki_config_json_end[];

extern char _binary_src_config_user_ui_default_config_json_start[];
extern char _binary_src_config_user_ui_default_config_json_end[];

using Dwki::DawkiConfigParser;

DawkiConfigParser::DawkiConfigParser()
{
  initDawkiConfig();
  initUserUIConfig();
}

void
DawkiConfigParser::initDawkiConfig()
{
  char* data_start = _binary_src_config_dawki_config_json_start;
  char* data_end   = _binary_src_config_dawki_config_json_end;
  std::string configJsonString;

  while (data_start < data_end)
    configJsonString += *data_start++;

  std::stringstream ss{ configJsonString };
  read_json(ss, dawkiConfig);
}

void
DawkiConfigParser::initUserUIConfig()
{
  auto dawkiConfigDirPath = GetProperty<CORE, std::string>(DAWKI_CONFIG_PATH);
  auto uiConfigFilename   = GetProperty<CORE, std::string>(UI_FILENAME);
  auto uiConfigFilePath   = dawkiConfigDirPath + "/" + uiConfigFilename;
  dawkiConfigDirPath.replace(0, 5, std::getenv("HOME"));
  if (std::filesystem::exists(uiConfigFilePath))
  {
    LogInfo << "FOUND";
    read_json(uiConfigFilePath, userUiConfig);
  }
  else
  {
    LogInfo << "NOT FOUND";
    boost::filesystem::path dir(dawkiConfigDirPath);
    char* data_start = _binary_src_config_user_ui_default_config_json_start;
    char* data_end   = _binary_src_config_user_ui_default_config_json_end;
    std::string configJsonString;

    while (data_start < data_end)
      configJsonString += *data_start++;

    std::stringstream ss{ configJsonString };

    LogInfo << configJsonString;
    read_json(ss, userUiConfig);
  }
}
