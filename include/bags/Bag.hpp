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

        [[nodiscard]]  std::string const& type() const;
         void add_item(std::unique_ptr<Product> item);
        // int -> double ?? an item like cheece could be 0.5kg or volume
        [[nodiscard]]  std::unordered_map<std::string, double> contents() const;
        double price() const;

        void show_contents() const;
        std::string show_used_capacity() const;


    protected:

        Bag(std::string type, double capacity, double price);

        std::string type_;
        double capacity_;
        double used_capacity;
        std::vector<std::unique_ptr<Product>> items_;
        double price_;
};