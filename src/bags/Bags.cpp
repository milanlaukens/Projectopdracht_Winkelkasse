#include <string>
#include <memory>
#include <unordered_map>
#include <vector>

#include "../../include/bags/Bag.hpp"
#include "../../include/products/Product.hpp"

Bag::Bag(std::string type, double capacity, double price) : type_(type), capacity_(capacity), price_(price) {
    contnent_volume_ = 0;
}

std::string const& Bag::type() const {
    return type_;
}

void Bag::add_item(std::unique_ptr<Product> item) {
    if (item->quantity()+contnent_volume_ > capacity_) {
        // raise OutOfCapacityExeption();
        return;
    }
    items_.push_back(item);
}

std::unordered_map<std::string, double> Bag::contents() const {
    std::unordered_map<std::string, double> contents;
    for (int i = 0; i < items_.size(); i++) {
        std::string name = items_.at(i)->name();
        double quantity = items_.at(i)->quantity();
        std::pair<std::string, double> product (name, quantity);
        contents.insert(product);
    }

    return contents;
}

double Bag::price() const {
    return price_;
}
