#pragma once
#include "Food.hpp"

class Cheese : public Food
{
    public:
        explicit Cheese(double weight, double price_per_kg);

    private:
        double weight_;
        double price_per_kg_;
};