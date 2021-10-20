#include <gtest/gtest.h>
#include <stdio.h>
#include <string.h>

#include <cstdio>
#include <cucumber-cpp/autodetect.hpp>
#include <cucumber-cpp/internal/step/StepMacros.hpp>
#include <vector>

using cucumber::ScenarioScope;

class AlsaCtx
{
public:
};

GIVEN("^Dawki finds out that docker daemon is not working$")
{
  SUCCEED();
}

WHEN("^Dawki tries to query the docker daemon$")
{
  pending();
}

THEN("^Dawki marks the docker daemon url as non functional$")
{
  pending();
}
