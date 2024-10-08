#include <iostream>
using namespace std;

class Calculator
{
public:
    // inline function use
    inline int multi(int a, int b)
    {
        return (a * b);
    }
    inline int club(int n)
    {
        return (n * n * n);
    }
};

int main()
{
    int num1, num2, multi, club;

    cout << "Enter the number:";
    cin >> num1;
    cout << "Enter the number:";
    cin >> num2;

    multi = num1 * num2;
    cout << "multiplication:" << multi << endl;

    club = num1 * num1 * num1;
    cout << "club:" << club << endl;

    return 0;
}

