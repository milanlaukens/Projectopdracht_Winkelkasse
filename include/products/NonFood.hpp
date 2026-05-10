#pragma once
#include "Product.hpp"


class NonFood : public Product
{
    public:
        virtual ~NonFood() = default;

        [[nodiscard]] double price() const;

    protected:
        NonFood(std::string name, double base_price, int units);

    private:
        int units_;
};