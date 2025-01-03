#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include <iostream>
#include <vector>
class Product {
public:
    Product() : parts() {}
    ~Product() {}

    void Add(std::string part) {
        parts.push_back(part);
    }
    void Show() {
        std::cout << "Product: " << std::endl;
        for (auto part : parts) {
            std::cout << part << std::endl;
        }
    }

private:
    std::vector<std::string> parts;
};

#endif // __PRODUCT_H__