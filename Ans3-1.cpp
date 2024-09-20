#include <iostream>
using namespace std;

class Calculator
{

public:
    // inline function use
    inline float mul(float num1, float num2)
    {
        return (num1 * num2);
    }
    inline int club(int num1, int num2)
    {
        return (num1 * num1 * num1);
    }
};
int main()
{
    float number, num1, num2, mul, club;
    cout << "Enter the number:";
    cin >> num1;
    cout << "Enter the number:";
    cin >> num2;

    mul = num1 * num2;
    cout << "multiplication:" << mul << endl;

    club = num1 * num1 * num1;
    cout << "club:" << club << endl;

    return 0;
}
