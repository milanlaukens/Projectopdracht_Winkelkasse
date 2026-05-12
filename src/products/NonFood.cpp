#include "../../include/products/NonFood.hpp"

NonFood::NonFood(std::string name, double base_price, int units) : 
    Product(name, "Non food", base_price, 0.21, units), 
    units_(units) 
    {}


double NonFood::price() const {
    return base_price_ * units_;
}