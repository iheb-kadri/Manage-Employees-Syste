#include "employee_manager.h"
#include <iostream>

int main() {
    EmployeeManager manager1("John Doe", 101, 45);
    
    std::cout << "Employee Manager ID: " << manager1.getEmployeeManagerId() << std::endl;
    std::cout << "Employee Manager Name: " << manager1.getEmployeeManagerName() << std::endl;
    std::cout << "Employee Manager Age: " << manager1.getEmployeeManagerAge() << std::endl;

    return 0;
}
