#include "include/Inventory.hpp"
#include "include/SalesTransaction.hpp"
#include "include/Report.hpp"
#include <iostream>

int main() {
    Inventory inventory;
    SalesTransaction transaction(0.15);  // 15% discount for purchases above $500
    Report report;

    Product product1(1, "Laptop", 750, 10);
    Product product2(2, "Mouse", 25, 50);
    Product product3(3, "Keyboard", 40, 30);

    inventory.addProduct(product1);
    inventory.addProduct(product2);
    inventory.addProduct(product3);

    inventory.displayInventory();

    // Process a sale
    double saleAmount = transaction.processSale(product1, 2);  // 2 laptops
    if (saleAmount > 0) {
        report.generateSalesReport(transaction);
    }

    return 0;
}
