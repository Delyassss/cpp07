#include "test.hpp"
#include <string>
#include <iostream>




int main() {
    // 1. Test Generic Function with Int
    std::cout << "Int Mult: " << multiply(5, 5) << std::endl;

    // 2. Test Generic Function with Float
    std::cout << "Float Mult: " << multiply(4.5f, 2.0f) << std::endl;

    // 3. Test Class Template
    Box<int> intBox(100);
    std::cout << "Box contains: " << intBox.unleash() << std::endl;

    // 4. Test Specialization
    std::string s1 = "C++";
    std::string s2 = "Templates";
    // This should use your specialization!
    std::cout << "String 'Mult': " << multiply(s1, s2) << std::endl;

    return 0;
}