#pragma once
#include "Product.hpp"


class NonFood : public Product
{
    public:
        virtual ~NonFood() = default;

        [[nodiscard]] double price() const;
        [[nodiscard]] double base_price() const override;
        [[nodiscard]] double vat_percentage() const override;

    protected:
        NonFood(std::string name, int units, double base_price);

    private:
        int units_;
        double base_price_;
        double vat_percentage_;
};