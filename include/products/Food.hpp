#pragma once
#include "Product.hpp"


class Food : public Product
{
    public:
        virtual ~Food() = default;

        [[nodiscard]] double price() const;
        double base_price() const override;
        double vat_percentage() const override;

    protected:
        Food(std::string name, double base_price, double weight);

    private:
        double base_price_;
        double vat_percentage_;
        double weight_;

};