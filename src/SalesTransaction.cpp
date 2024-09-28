#include "../include/SalesTransaction.hpp"
#include <iostream>

SalesTransaction::SalesTransaction(double discountRate)
    : discountRate(discountRate), totalSales(0) {}

double SalesTransaction::processSale(Product &product, int quantity) {
    if (product.getStock() < quantity) {
        std::cout << "Insufficient stock for " << product.getName() << std::endl;
        return 0;
    }
    
    double total = product.getPrice() * quantity;
    double finalAmount = calculateDiscount(total);

    product.setStock(product.getStock() - quantity);
    totalSales += finalAmount;

    displayReceipt(product, quantity, finalAmount);
    return finalAmount;
}

double SalesTransaction::calculateDiscount(double amount) {
    if (amount > 500) {
        return amount * (1 - discountRate);
    }
    return amount;
}

void SalesTransaction::displayReceipt(const Product &product, int quantity, double total) const {
    std::cout << "\n===== RECEIPT =====" << std::endl;
    std::cout << "Product: " << product.getName() << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Total: $" << total << std::endl;
    std::cout << "===================" << std::endl;
}

// Add this function implementation
double SalesTransaction::getTotalSales() const {
    return totalSales;
}
