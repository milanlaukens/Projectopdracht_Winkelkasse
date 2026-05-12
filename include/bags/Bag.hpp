#pragma once
#include <string>
#include <memory>
#include <unordered_map>
#include <vector>

#include "../products/Product.hpp"




class Bag
{
    public:
        virtual ~Bag() = default;

        [[nodiscard]] virtual std::string const& type() const = 0;
        virtual void add_item(std::unique_ptr<Product> item) = 0;
        // int -> double ?? an item like cheece could be 0.5kg or volume
        [[nodiscard]] virtual std::unordered_map<std::string, double> contents() const = 0;
        double price() const;


    protected:

        Bag(std::string type, double capacity, double price);

        std::string type_;
        double capacity_;
        double contnent_volume_ = 0;
        std::vector<std::unique_ptr<Product>> items_;
        double price_;
};