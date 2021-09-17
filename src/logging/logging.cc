#include "dawki/logging/logging.h"

void Dwki::init_logging()
{
  namespace logging = boost::log;
  logging::add_file_log("sample.log");
  logging::core::get()->set_filter(logging::trivial::severity >=
                                   logging::trivial::info);
}

