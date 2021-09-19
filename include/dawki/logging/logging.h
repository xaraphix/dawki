#pragma once

#define BOOST_LOG_DYN_LINK 1
#include <boost/log/expressions.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <iostream>

#define LogInfo BOOST_LOG_TRIVIAL(info)
#define LogWarn BOOST_LOG_TRIVIAL(warn)
#define LogErr BOOST_LOG_TRIVIAL(error)
#define LogFatal BOOST_LOG_TRIVIAL(fatal)
#define LogDebug BOOST_LOG_TRIVIAL(debug)
#define LogTrace BOOST_LOG_TRIVIAL(trace)

namespace Dwki
{
void
init_logging();

} // namespace Dwki
