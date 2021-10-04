#include "dawki/config/dawki_config_parser.h"
#include <boost/foreach.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <sstream>
#include <string>

boost::property_tree::ptree Dwki::DawkiConfigParser::dawkiUiConfig = boost::property_tree::ptree{};
extern char _binary_src_config_dawki_widgets_config_json_start[];
extern char _binary_src_config_dawki_widgets_config_json_end[];
extern char _binary_src_config_dawki_widgets_config_json_size[];

Dwki::DawkiConfigParser::DawkiConfigParser()
{

  char* data_start = _binary_src_config_dawki_widgets_config_json_start;
  char* data_end   = _binary_src_config_dawki_widgets_config_json_end;
  size_t data_size = (size_t)_binary_src_config_dawki_widgets_config_json_size;
  std::string configJsonString;

  while (data_start < data_end)
    configJsonString += *data_start++;

  using boost::property_tree::ptree;
  using boost::property_tree::read_json;
  std::stringstream ss{ configJsonString };
  read_json(ss, dawkiUiConfig);
}
