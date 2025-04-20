//
// Created by at on 12.05.2023.
//

#ifndef KOLOKWIUM_TYPEDEFS_H
#define KOLOKWIUM_TYPEDEFS_H
#include "Spacecraft.h"
#include <memory>

enum Team {
  REPUBLIC = 0,
  EMPIRE = 1
};

enum Direction {
  X = 0,
  Y = 1,
};

class Spacecraft;
class Interceptor;
class Galaxy;
class Fighter;

typedef std::shared_ptr<Spacecraft> SpacecraftPtr;
typedef std::shared_ptr<Galaxy> GalaxyPtr;
typedef std::shared_ptr<Fighter> FighterPtr;
typedef std::shared_ptr<Interceptor> InterceptorPtr;

#endif //KOLOKWIUM_TYPEDEFS_H
