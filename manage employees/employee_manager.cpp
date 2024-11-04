#include "employee_manager.h"
#include <string>

// Define the constructor
EmployeeManager::EmployeeManager(const std::string& name, int id, int age) : name(name), id(id), age(age) {}

// Define the methods
int EmployeeManager::getEmployeeManagerId() const {
    return id;
}

int EmployeeManager::getEmployeeManagerAge() const {
    return age;
}

std::string EmployeeManager::getEmployeeManagerName() const {
    return name;
}
