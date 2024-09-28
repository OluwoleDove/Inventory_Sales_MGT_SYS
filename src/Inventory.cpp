#include "../include/Inventory.hpp"
#include <iostream>

void Inventory::addProduct(const Product &product) {
    products.push_back(product);
}

void Inventory::updateStock(int productId, int newStock) {
    Product* product = findProductById(productId);
    if (product) {
        product->setStock(newStock);
        std::cout << "Stock updated for Product ID " << productId << std::endl;
    } else {
        std::cout << "Product not found!" << std::endl;
    }
}

Product* Inventory::findProductById(int productId) {
    for (auto &product : products) {
        if (product.getId() == productId) {
            return &product;
        }
    }
    return nullptr;
}

void Inventory::displayInventory() const {
    std::cout << "\n===== Inventory List =====" << std::endl;
    for (const auto &product : products) {
        product.display();
        std::cout << "--------------------------" << std::endl;
    }
}
