#include <iostream>
using namespace std;

class Person
{
public:
    string Name;
    int Age;
    void getName()
    {
        cout << "-------student---";
        cout << "\nEnter your Name:";
        cin >> Name;
    }
    void getAge()
    {
        cout << "Enter your Age:";
        cin >> Age;
    }
};

class Student
{
public:
    float percentage;
    void getpercentage()
    {
        cout << "Enter your percentage:";
        cin >> percentage;
    }
};

class Teacher : public Person, public Student
{
public:
    float salary;
    void getSalary()
    {
        cout << "\n------Teacher-----" << endl;
        cout << "Enter your salary:";
        cin >> salary;
    }
    void getDisplay()
    {
        // float percentage, salary;
        cout << "\n-------------" << endl;
        cout << "Name:" << Name << endl;
        cout << "Age:" << Age << endl;
        cout << "Percentage:" << percentage << endl;
        cout << "Salary:" << salary << endl;
    }
};

int main()
{
    Teacher T1;

    T1.getName();
    T1.getAge();
    T1.getpercentage();
    T1.getSalary();
    T1.getDisplay();
}