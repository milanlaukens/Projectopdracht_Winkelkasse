#include "../../include/products/NonFood.hpp"

NonFood::NonFood(std::string name, int units, double base_price) : 
    Product(name, "Non food", base_price, 0.21, units), 
    units_(units) 
    {}


double NonFood::price() const {
    return base_price_ * units_;
}