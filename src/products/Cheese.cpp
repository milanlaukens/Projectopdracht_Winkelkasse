#include "../../include/products/Cheese.hpp"

Cheese::Cheese(double weight, double price_per_kg) : Food("Cheese", price_per_kg, weight), weight_(weight), price_per_kg_(price_per_kg) {};
