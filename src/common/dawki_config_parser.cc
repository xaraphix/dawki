#include <boost/foreach.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <string>

#include "dawki/common/dawki_config_parser.h"

#include "dawki/logging/logging.h"
#include "glibmm/ustring.h"

boost::property_tree::ptree Dwki::DawkiConfigParser::config = boost::property_tree::ptree{};

Dwki::DawkiConfigParser::DawkiConfigParser()
{
  using boost::property_tree::ptree;
  using boost::property_tree::read_json;
  std::ifstream jsonFile(DAWKI_WIDGET_CONFIG_FILE_PATH);
  read_json(jsonFile, config);
}

