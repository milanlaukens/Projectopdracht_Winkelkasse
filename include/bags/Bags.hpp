#pragma once
#include <string>
#include <memory>
#include <unordered_map>


class Product
{
    public:
        virtual ~Product() = default;

        [[nodiscard]] virtual std::string const& name() const = 0;
        [[nodiscard]] virtual std::string const& type() const = 0;
        [[nodiscard]] virtual double base_price() const = 0;
        [[nodiscard]] virtual double vat_percentage() const = 0;

        [[nodiscard]] double price() const;
};


class Bag
{
    public:
        virtual ~Bag() = default;

        [[nodiscard]] virtual std::string const& type() const = 0;
        virtual void add_item(std::unique_ptr<Product> item) = 0;
        [[nodiscard]] virtual std::unordered_map<std::string, int> contents() const = 0;
};