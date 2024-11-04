#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H 
#include <string>

class EmployeeManager {
private: 
    int id;
    int age;
    std::string name;

public:
    EmployeeManager(const std::string& name, int id, int age);
    int getEmployeeManagerId() const;
    int getEmployeeManagerAge() const;
    std::string getEmployeeManagerName() const;
};

#endif
