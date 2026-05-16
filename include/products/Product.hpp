#pragma once
#include <string>

class Product
{
    public:
        virtual ~Product() = default;

        [[nodiscard]] std::string const& name() const;
        [[nodiscard]] std::string const& type() const;
        [[nodiscard]] virtual double base_price() const = 0;
        [[nodiscard]] virtual double vat_percentage() const = 0;

        [[nodiscard]] double price() const;
        double quantity() const;
    protected:

        Product(std::string name, std::string type, double quantity );

        std::string name_;
        std::string type_;
        double quantity_;
        
};