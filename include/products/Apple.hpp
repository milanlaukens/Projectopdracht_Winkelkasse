#pragma once
#include "Food.hpp"

/**
 * create apple
 *
 * @param weight double.
 * @param price_per_kg double.
 */
class Apple : public Food
{
    public:
        explicit Apple(double weight, double price_per_kg);

    private:
        double weight_;
        double price_per_kg_;

};