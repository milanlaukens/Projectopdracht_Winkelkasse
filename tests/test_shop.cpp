#include "../include/products/Apple.hpp"
#include "../include/products/Cheese.hpp"
#include "../include/products/Soap.hpp"
#include "../include/products/Sponge.hpp"

#include <iostream>

void Print_Fail_Message(std::string message, int line) {
    std::cout << message << " Line: " << line << std::endl;
}

void Print_Succes_Message(std::string message) {
    std::cout << message << std::endl;
}

void Test_Apple() {
    Apple apple = Apple(3.5, 2);
    if (apple.base_price() == 2) {
        Print_Succes_Message("Apple baseprice Correct [OK]");
    } else {
        Print_Fail_Message("Apple baseprice failed [FAIL]", __LINE__);
    }

    if (apple.price() == 7) {
        Print_Succes_Message("Apple price Correct [OK]");
    } else {
        Print_Fail_Message("Apple price failed [FAIL]", __LINE__);
    }

    if (apple.name() == "Apple") {
        Print_Succes_Message("Apple name Correct [OK]");
    } else {
        Print_Fail_Message("Apple name failed [FAIL]", __LINE__);
    }

    if (apple.type() == "Food") {
        Print_Succes_Message("Apple type Correct [OK]");
    } else {
        Print_Fail_Message("Apple type failed [FAIL]", __LINE__);
    }

    if (apple.vat_percentage() == 6) {
        Print_Succes_Message("Apple vat percentage Correct [OK]");
    } else {
        Print_Fail_Message("Apple vat percentage failed [FAIL]", __LINE__);
    }
}

void Test_Cheese() {
    Cheese cheese = Cheese(3.5, 2);
    if (cheese.base_price() == 2) {
        Print_Succes_Message("Cheese baseprice Correct [OK]");
    } else {
        Print_Fail_Message("Cheese baseprice failed [FAIL]", __LINE__);
    }

    if (cheese.price() == 7) {
        Print_Succes_Message("Cheese price Correct [OK]");
    } else {
        Print_Fail_Message("Cheese price failed [FAIL]", __LINE__);
    }

    if (cheese.name() == "Cheese") {
        Print_Succes_Message("Cheese name Correct [OK]");
    } else {
        Print_Fail_Message("Cheese name failed [FAIL]", __LINE__);
    }

    if (cheese.type() == "Food") {
        Print_Succes_Message("Cheese type Correct [OK]");
    } else {
        Print_Fail_Message("Cheese type failed [FAIL]", __LINE__);
    }

    if (cheese.vat_percentage() == 6) {
        Print_Succes_Message("Cheese vat percentage Correct [OK]");
    } else {
        Print_Fail_Message("Cheese vat percentage failed [FAIL]", __LINE__);
    }
}

int main(void) {
    Test_Apple();
    Test_Cheese();
    return 0;
}