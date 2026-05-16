#include "../../include/products/Food.hpp"
#include <string>


Food::Food(std::string name, double base_price, double weight) : 
    Product(name, "Food", weight), 
    base_price_(base_price),
    vat_percentage_(0.06),
    weight_(weight)
    {}

double Food::price() const {
    return base_price_ * weight_;
}

double Food::base_price() const {
    return base_price_;
}

double Food::vat_percentage() const {
    return vat_percentage_;
}