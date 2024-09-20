#include <iostream>
using namespace std;

class Student
{
public:
    string StudentName;
    void getstudentName()
    {
        cout << "\nEnter your StudentName:";
        cin >> StudentName;
    }
};

class subMark
{
public:
    string sub1 = "English";
    string sub2 = "Gujarati";
    string sub3 = "Hindi";
    int subMark[3];

    // member function use sub and subMark
    void getdisplay()
    {
        cout << "\nsub1:" << sub1;
        cout << "\nsub2:" << sub2;
        cout << "\nsub3:" << sub3 << endl;

        cout << "\nEnter your  subjectMark:" << endl;
        cout << "English : ";
        cin >> subMark[1];
        cout << "Gujarati : ";
        cin >> subMark[2];
        cout << "Hindi : ";
        cin >> subMark[3];
    }
};

class Total : public Student, public subMark
{
public:
    int Total = subMark[1] + subMark[2] + subMark[3];
    // member function use TotalMark
    void getTotal()
    {
        cout << "\nTotalMark:" << subMark[1] + subMark[2] + subMark[3];
    }
};

int main()
{
    Total T1;
    cout << "-----Student marksheet----";

    T1.getstudentName();
    T1.getdisplay();
    T1.getTotal();
}