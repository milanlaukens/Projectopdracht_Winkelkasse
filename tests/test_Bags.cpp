#include <memory>
#include <iostream>

#include "../include/products/Apple.hpp"
#include "../include/products/Cheese.hpp"
#include "../include/products/Soap.hpp"
#include "../include/products/Sponge.hpp"

#include "../include/bags/BioBag.hpp"
#include "../include/bags/PlasticBag.hpp"
#include "../include/bags/ReusableBag.hpp"



void test_bags_capacity_and_adding_function() {
    BioBag biobag;
 
    auto apple = std::make_unique<Apple>(2.5,3); 

    auto soap = std::make_unique<Soap>(2,3); 

    auto sponge = std::make_unique<Sponge>(2,3); 

    auto cheese = std::make_unique<Cheese>(0.5,2); 


    biobag.add_item(std::move(apple));
    biobag.add_item(std::move(soap));

    biobag.show_contents(); 

    biobag.add_item(std::move(sponge));

    biobag.show_contents();

    biobag.add_item(std::move(cheese));

    biobag.show_contents();
}

int main(void) {
    std::cout << "RUNNING DEBUG VERSION" << std::endl;
    test_bags_capacity_and_adding_function();
    return 1;
}