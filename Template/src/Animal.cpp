#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& name) : name_(name) {}

void Animal::speak() const {
    std::cout << "Hello, I am " << name_ << std::endl;
}
