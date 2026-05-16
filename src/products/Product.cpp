#include "../../include/products/Product.hpp"


Product::Product(std::string name, std::string type, double quantity) : 
    name_(name), 
    type_(type), 
    quantity_(quantity)
    {}


std::string const& Product::name() const {
    return name_;
}

std::string const& Product::type() const {
    return type_;
}

double Product::quantity() const {
    return quantity_;
}