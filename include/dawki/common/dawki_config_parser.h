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

  template<typename T>
  T const GetProperty(std::string const prop)
  {
    return config.get<T>(prop);
  }

private:
  DawkiConfigParser();
  boost::property_tree::ptree config;
};
}
