#include <iostream>
#include "student.h"

int main() {
    Student s1(1, "Alice", 20);
    std::cout << "Student Name: " << s1.getName() << ", Age: " << s1.getAge() << std::endl;
    s1.setName("Alice Smith");
    s1.setAge(21);
    std::cout << "Updated Student Name: " << s1.getName() << ", Age: " << s1.getAge() << std::endl;
    return 0;
}
