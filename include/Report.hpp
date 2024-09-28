#ifndef REPORT_HPP
#define REPORT_HPP

#include "SalesTransaction.hpp"

class Report {
public:
    void generateSalesReport(const SalesTransaction &transaction);
};

#endif
