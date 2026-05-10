#pragma once
#include "Product.hpp"


class Food : public Product
{
    public:
        virtual ~Food() = default;

        [[nodiscard]] double price() const;

    protected:
        Food(std::string name, double base_price, double weight);

    private:
        double weight_;
};