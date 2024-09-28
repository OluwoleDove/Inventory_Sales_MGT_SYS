#include "../include/Product.hpp"
#include <iostream>

Product::Product(int id, const std::string &name, double price, int stock)
    : id(id), name(name), price(price), stock(stock) {}

int Product::getId() const { return id; }
std::string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
int Product::getStock() const { return stock; }

void Product::setPrice(double newPrice) {
    price = newPrice;
}

void Product::setStock(int newStock) {
    stock = newStock;
}

void Product::display() const {
    std::cout << "Product ID: " << id
              << "\nName: " << name
              << "\nPrice: $" << price
              << "\nStock: " << stock << std::endl;
}
