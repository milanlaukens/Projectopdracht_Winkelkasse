#pragma once
#include "Product.hpp"


class NonFood : public Product
{
    public:
        virtual ~NonFood() = default;

        [[nodiscard]] double price() const;

    protected:
        NonFood(std::string name, int units, double base_price);

    private:
        int units_;
};