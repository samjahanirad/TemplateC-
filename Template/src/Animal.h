#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal(const std::string& name);
    void speak() const;

private:
    std::string name_;
};

#endif
