#include <boost/foreach.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <string>

#include "dawki/common/dawki_config_parser.h"
#include "dawki/logging/logging.h"
#include "glibmm/ustring.h"

Dwki::DawkiConfigParser::DawkiConfigParser()
{
  using boost::property_tree::ptree;
  using boost::property_tree::read_json;
  std::ifstream jsonFile("/home/suyash/Code/dawki/dawki_widgets_config.json");
  read_json(jsonFile, config);
}

