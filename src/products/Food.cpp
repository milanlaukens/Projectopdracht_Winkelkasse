#include "../../include/products/Food.hpp"
#include <string>


Food::Food(std::string name, double base_price, double weight) : 
    Product(name, "Food", base_price, 0.06, weight), 
    weight_(weight) 
    {}

double Food::price() const {
    return base_price_ * weight_;
}