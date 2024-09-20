#include <iostream>
using namespace std;

class Calculator
{
    int num1;
    int num2;

public:
    Calculator(int num1_, int num2_)
    {
        num1 = num1_;
        num2 = num2_;
    }

    int sum()
    {
        return num1 + num2;
    }
    int Add()
    {
        return num1 - num2;
    }
    float mul()
    {
        return num1 * num2;
    }
    float div()
    {
        return num1 / num2;
    }
};

int main()
{
    int num1, num2;
    cout << "Enter the num1:";
    cin >> num1;
    cout << "Enter the num2:";
    cin >> num2;

    Calculator calculator(num1, num2);
    cout << "sum: " << calculator.sum() << endl;
    cout << "Add: " << calculator.Add() << endl;
    cout << "mul: " << calculator.mul() << endl;
    cout << "div: " << calculator.div() << endl;
    return 0;
}