  #ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    int id;
    std::string name;
    int age;

public:
    Employee(int id, const std::string& name, int age);
    int getEmployeeId() const;
    std::string getEmployeeName() const;
    int getEmployeeAge() const;
};

#endif
