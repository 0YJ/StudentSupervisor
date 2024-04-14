#include "student.h"
#include <sqlite3.h>
#include <iostream>

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    for(int i = 0; i<argc; i++){
        std::cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << "\n";
    }
    std::cout << "\n";
    return 0;
}

std::vector<Student> Student::loadAllStudents() {
    sqlite3* db;
    sqlite3_open("student.db", &db);

    const char* sql = "SELECT id, name, age FROM students;";
    std::vector<Student> students;
    sqlite3_exec(db, sql, callback, 0, NULL);

    sqlite3_close(db);
    return students;
}

void Student::saveStudent(const Student& student) {
    sqlite3* db;
    sqlite3_open("student.db", &db);

    std::string sql = "INSERT INTO students (name, age) VALUES ('" + student.name + "', " + std::to_string(student.age) + ");";
    sqlite3_exec(db, sql.c_str(), 0, 0, 0);

    sqlite3_close(db);
}
