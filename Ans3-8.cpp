#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string studentclass;
    int rollnumber;
    float marks;

public:
    Student(string Name, string Studentclass, int Rollnumber, float Marks)
    {
        name = Name;
        studentclass = Studentclass;
        rollnumber = Rollnumber;
        marks = Marks;
    }

    string calculategrade()
    {
        if (marks >= 90)
        {
            return "A+";
        }
        else if (marks >= 80)
        {
            return "A";
        }
        else if (marks >= 60)
        {
            return "B";
        }
        else
        {
            return "C";
        }
    }

    void display()
    {
        cout << "\nstudentName:" << name;
        cout << "\nstudentclass:" << studentclass;
        cout << "\nRollnumber:" << rollnumber;
        cout << "\nmarks:" << marks;
        cout << "\ngrade:" << calculategrade();
    }
};

int main()
{
    string name;
    string studentclass;
    int rollnumber;
    float marks;
    string calculategrade;

    cout << "Enter your studentName:";
    cin >> name;
    cout << "Enter your studentclass:";
    cin >> studentclass;
    cout << "Enter your Rollnumber:";
    cin >> rollnumber;
    cout << "Enter your mark(0-100):";
    cin >> marks;

    Student S1(name, studentclass, rollnumber, marks);
    S1.display();
};