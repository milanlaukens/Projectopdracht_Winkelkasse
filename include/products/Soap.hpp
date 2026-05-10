#pragma once
#include "NonFood.hpp"


class Soap : public NonFood
{
    public:
        explicit Soap(double price, int units);
    
    private:
        double price_;
};
