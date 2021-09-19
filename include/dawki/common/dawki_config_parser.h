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
  DawkiConfigParser(DawkiConfigParser const&) = delete;
  DawkiConfigParser& operator-(DawkiConfigParser const&) = delete;

  static std::shared_ptr<DawkiConfigParser> Get()
  {
    static std::shared_ptr<DawkiConfigParser> p{ new DawkiConfigParser };
    return p;
  }

  Glib::ustring const GetProperty(std::string const prop);

private:
  DawkiConfigParser();
  boost::property_tree::ptree config;
};
}
