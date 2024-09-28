#include "../include/Report.hpp"
#include <iostream>

void Report::generateSalesReport(const SalesTransaction &transaction) {
    std::cout << "\n===== Sales Report =====" << std::endl;
    std::cout << "Total Sales: $" << transaction.getTotalSales() << std::endl;
    std::cout << "========================" << std::endl;
}
