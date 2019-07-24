#pragma once

#include "types.hh"

#include <list>
#include <string>
#include <unordered_map>

namespace FAF {

struct Unit {
  std::string name;

  ui64 mass_cost;
  ui64 energy_cost;
  ui64 time_cost;

  ui64 mass_storage;
  ui64 energy_storage;

  i64 mass_yield;
  i64 energy_yield;
  double build_capacity;

  bool move;
  bool assist;
  bool sacrifice;

  ui64 size;  // size of one side, assuming all buildings are square

  double storage_adjacency;     // bonus to production - in percents per side
  double production_adjacency;  // discount to consumption - in percents per side
};

template <class T>
using FactionMap = std::unordered_map<std::string /* faction */, T>;
using UnitMap = std::unordered_map<std::string /* name */, Unit>;
using BlueprintMap = std::unordered_map<std::string /* name */, std::list<std::string>>;

}  // namespace FAF
