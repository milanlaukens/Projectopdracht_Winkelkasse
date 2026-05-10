#pragma once
#include <vector>
#include <unordered_map>
#include <memory>
#include <iomanip>

#include "../products/Product.hpp"
#include "../bags/Bags.hpp"

class Shop
{
    public:
        void add_product(std::unique_ptr<Product> product);
        void add_products(std::vector<std::unique_ptr<Product>> products);

        void add_bag(std::unique_ptr<Bag> bag);
        void add_bags(std::vector<std::unique_ptr<Bag>> bags);

        [[nodiscard]] std::unordered_map<std::string, int> product_inventory() const;
        [[nodiscard]] std::unordered_map<std::string, int> bag_inventory() const;

        [[nodiscard]] std::unique_ptr<Product> take_product(std::string const& name);
        [[nodiscard]] std::unique_ptr<Bag> take_bag(std::string const& type);

    private:
        std::vector<std::unique_ptr<Product>> products_;
        std::vector<std::unique_ptr<Bag>> bags_;
};