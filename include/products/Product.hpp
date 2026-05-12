#pragma once
#include <string>

class Product
{
    public:
        virtual ~Product() = default;

        [[nodiscard]] std::string const& name() const;
        [[nodiscard]] std::string const& type() const;
        [[nodiscard]] double base_price() const;
        [[nodiscard]] double vat_percentage() const;

        [[nodiscard]] double price() const;
        double quantity() const;
    protected:

        Product(std::string name, std::string type, double base_price, double vat_percentage, double quantity );

        std::string name_;
        std::string type_;
        double base_price_;
        double vat_percentage_;
        double quantity_;
        
};