#ifndef SALESTRANSACTION_HPP
#define SALESTRANSACTION_HPP

#include "Product.hpp"
#include "Inventory.hpp"

class SalesTransaction {
private:
    double discountRate;
    double totalSales;

public:
    SalesTransaction(double discountRate = 0.10);

    double processSale(Product &product, int quantity);
    double calculateDiscount(double amount);
    void displayReceipt(const Product &product, int quantity, double total) const;

    // Add this function
    double getTotalSales() const;  // Getter for total sales
};

#endif