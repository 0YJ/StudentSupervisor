#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(int id, std::string name, int age);
    int getId() const;
    std::string getName() const;
    int getAge() const;
    void setName(std::string name);
    void setAge(int age);

private:
    int id;
    std::string name;
    int age;
};

#endif // STUDENT_H
