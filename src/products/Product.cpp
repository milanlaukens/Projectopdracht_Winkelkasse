#include "../../include/products/Product.hpp"


Product::Product(std::string name, std::string type, double base_price, double vat_percentage, double quantity) : 
    name_(name), 
    type_(type), 
    base_price_(base_price), 
    vat_percentage_(vat_percentage),
    quantity_(quantity)
    {}


std::string const& Product::name() const {
    return name_;
}

std::string const& Product::type() const {
    return type_;
}

// why not "doubel const& Product::base_price() const"
double Product::base_price() const {
    return base_price_;
}

double Product::vat_percentage() const {
    return vat_percentage_;
}

double Product::quantity() const {
    return quantity_;
}