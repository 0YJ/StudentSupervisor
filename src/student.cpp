#include "student.h"

Student::Student(int id, std::string name, int age) : id(id), name(name), age(age) {}

int Student::getId() const {
    return id;
}

std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

void Student::setName(std::string name) {
    this->name = name;
}

void Student::setAge(int age) {
    this->age = age;
}
