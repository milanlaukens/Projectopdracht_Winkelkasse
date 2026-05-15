#include <string>
#include <memory>
#include <unordered_map>
#include <vector>
#include <iostream>

#include "../../include/bags/Bag.hpp"
#include "../../include/products/Product.hpp"

Bag::Bag(std::string type, double capacity, double price) : type_(type), capacity_(capacity), price_(price) {
    used_capacity = 0;
}

std::string const& Bag::type() const {
    return type_;
}

void Bag::add_item(std::unique_ptr<Product> item) {

    if(!item) {
        // ItemIsNullExeption
        std::cout << "NULL ITEM" << std::endl;
        return;
    } 
    const double quantity = item->quantity(); 

    if (quantity + used_capacity > capacity_) {
        // raise OutOfCapacityExeption();
        std::cout << "out of capacity" << std::endl; 
        return;
    }
    std::cout << item->name() << " added to " << type_ << std::endl; 
    // add's item to the items_ variable
    items_.push_back(std::move(item));

    // increase the 
    used_capacity += quantity;
    std::cout << show_used_capacity() << " used capacity" << std::endl;
}

std::unordered_map<std::string, double> Bag::contents() const {
    std::unordered_map<std::string, double> contents;
    for (auto const& item : items_) {
        std::string name = item->name();
        double quantity = item->quantity();
        std::pair<std::string, double> product (name, quantity);
        contents.insert(product);
    }

    return contents;
}

double Bag::price() const {
    return price_;
}

void Bag::show_contents() const {
    for (const auto & [ key, value ] : contents()) {
        std::cout << "- " << key << " (" << value << ")" << std::endl;
    }
}

std::string Bag::show_used_capacity() const {
    return std::to_string(used_capacity);
}