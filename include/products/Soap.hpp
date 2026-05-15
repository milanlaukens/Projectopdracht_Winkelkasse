#pragma once
#include "NonFood.hpp"


class Soap : public NonFood
{
    public:
        explicit Soap(int units, double price);
    
    private:
        double price_;
};
