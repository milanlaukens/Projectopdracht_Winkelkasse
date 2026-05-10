#pragma once
#include "NonFood.hpp"

class Sponge : public NonFood
{
    public:
        explicit Sponge(double price, int units);
    
    private:
        double price_;
};
