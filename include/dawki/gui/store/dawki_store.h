#pragma once

#include <memory>
#include <sigc++-3.0/sigc++/signal.h>
namespace Dwki
{
class DawkiStore
{
  /* make store singleton */
public:
  DawkiStore(DawkiStore const&) = delete;
  DawkiStore& operator=(DawkiStore const&) = delete;
  static std::shared_ptr<DawkiStore> Get()
  {
    static std::shared_ptr<DawkiStore> p{ new DawkiStore };
    return p;
  }

  sigc::signal<void(int)> WindowWidthUpdatedSignal;

private:
  DawkiStore();
};
} // namespace Dwki
