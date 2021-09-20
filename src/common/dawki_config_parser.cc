#include <boost/foreach.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <istream>
#include <sstream>
#include <string>

#include "dawki/common/dawki_config_parser.h"

#include "dawki/logging/logging.h"
#include "giomm/file.h"
#include "giomm/resource.h"
#include "glibmm/ustring.h"
#include "glibmm/bytes.h"
#include "giomm/fileinputstream.h"
#include "giomm/file.h"

boost::property_tree::ptree Dwki::DawkiConfigParser::config = boost::property_tree::ptree{};
extern char _binary_config_dawki_widgets_config_json_start;

Dwki::DawkiConfigParser::DawkiConfigParser()
{
  using boost::property_tree::ptree;
  using boost::property_tree::read_json;
  std::stringstream ss{&_binary_config_dawki_widgets_config_json_start};
  read_json(ss, config);
}
