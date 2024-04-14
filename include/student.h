#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
public:
    Student(int id, std::string name, int age);
    static std::vector<Student> loadAllStudents();
    static void saveStudent(const Student& student);

private:
    int id;
    std::string name;
    int age;
};

#endif // STUDENT_H
