#include "employee.h"
#include <string>

// Define the constructor
Employee::Employee(int id, const std::string& name, int age) : id(id), name(name), age(age) {}

// Define the methods
int Employee::getEmployeeId() const {
    return id;
}

std::string Employee::getEmployeeName() const {
    return name;
}

int Employee::getEmployeeAge() const {
    return age;
}
