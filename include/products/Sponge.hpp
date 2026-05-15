#pragma once
#include "NonFood.hpp"

class Sponge : public NonFood
{
    public:
        explicit Sponge(int units,double price);
    
    private:
        double price_;
};
