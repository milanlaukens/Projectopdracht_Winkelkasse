#pragma once
#include "Bag.hpp"

/**
 * Creates a bag with a fixed type, capacity and price.
 *
 * @param type Type of the bag.
 * @param capacity Maximum capacity of the bag.
 * @param price Price of the bag.
 */
class PlasticBag : public Bag {
    public:
        PlasticBag(double price);
};