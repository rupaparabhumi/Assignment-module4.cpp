#include <iostream>
using namespace std;

class Student
{
public:
    int Roll;
    void getRoll()
    {
        cout << "\nEnter your Roll:";
        cin >> Roll;
    }
};

class Test
{
public:
    float EnglishMarks, HindiMarks;
    void getMarks()
    {
        cout << "\nEnter your english Subject Marks:";
        cin >> EnglishMarks;
        cout << "\nEnter your Hindi subject Marks:";
        cin >> HindiMarks;
    }
};

class Result : public Test, public Student
{
public:
    void getResult()
    {
        cout << "\nTotalMarks:" << EnglishMarks + HindiMarks << endl;
    }

    void getDisplay()
    {
        cout << "\n-------------------" << endl;
        cout << "\nRoll:" << Roll;
        cout << "\nEnglish Subject Marks:" << EnglishMarks;
        cout << "\nHindi subject Marks:" << HindiMarks;
        cout << "\nTotalMarks:" << EnglishMarks + HindiMarks << endl;
    }
};

int main()
{
    Result R1;
    R1.getRoll();
    R1.getMarks();
    R1.getResult();
    R1.getDisplay();
}