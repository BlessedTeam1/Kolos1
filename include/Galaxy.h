#ifndef GALAXY_H
#define GALAXY_H
#include "Spacecraft.h"
#include <vector>
#include <algorithm>
class Galaxy {
public:
    explicit Galaxy(double balance);

    ~Galaxy() = default;

    double get_balance() const;

private:
   double balance;
    std::vector<Spacecraft> spacecraft;

};

#endif