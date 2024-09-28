#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Product.hpp"
#include <vector>

class Inventory {
private:
    std::vector<Product> products;

public:
    void addProduct(const Product &product);
    void updateStock(int productId, int newStock);
    Product* findProductById(int productId);
    void displayInventory() const;
};

#endif
