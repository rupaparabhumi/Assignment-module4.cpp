#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int employeeID;
    float salary;

public:
    Employee(string Name, int EmployeeID, float Salary)
    {
        name = Name;
        employeeID = EmployeeID;
        salary = Salary;
    }

    // employee performance
    float calculatesalary(float performancerating)
    {
        if (performancerating >= 0.0 && performancerating <= 7.0)
        {
            salary *= performancerating;
        }
        else
        {
            cout << "invalid performancerating" << endl;
        }
    }
    // set salary based
    float setsalary()
    {
        return salary;
    }

    string getname()
    {
        return name;
    }

    int getemployeeId()
    {
        return employeeID;
    }
    float getsalary()
    {
        return salary;
    }
};
int main()
{
    string Name;
    int EmployeeID;
    float Salary;

    cout << "Enter your name:";
    cin >> Name;
    cout << "Enter your EmployeeID:";
    cin >> EmployeeID;
    cout << "Enter your salary:";
    cin >> Salary;

    Employee E1(Name, EmployeeID, Salary);
    cout << "salary:" << E1.getsalary();

    float performancerating;
    cout << "\nEnter performancerating: ";
    cin >> performancerating;

    E1.calculatesalary(performancerating);

    cout << "upated salary:" << E1.getsalary();

    return 0;
}