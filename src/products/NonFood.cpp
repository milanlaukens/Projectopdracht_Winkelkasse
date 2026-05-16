#include "../../include/products/NonFood.hpp"

NonFood::NonFood(std::string name, int units, double base_price) : 
    Product(name, "Non food", units), 
    units_(units),
    base_price_(base_price),
    vat_percentage_(0.21)
    {}


double NonFood::price() const {
    return base_price_ * units_;
}

double NonFood::base_price() const {
    return base_price_;
}

double NonFood::vat_percentage() const {
    return vat_percentage_;
}

