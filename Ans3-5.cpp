#include <iostream>
using namespace std;

class Triangle
{
private:
    int sideA;
    int sideB;
    int sideC;

public:
    Triangle(int sideA_, int sideB_, int sideC_)
    {
        sideA = sideA_;
        sideB = sideB_;
        sideC = sideC_;
    }
    // function to determine type
    void determineType()
    {
        if (sideA == sideB && sideB == sideC)
        {
            cout << "Equilateral Triangle:" << endl;
        }
        else if (sideA == sideB || sideA == sideC || sideB == sideC)
        {
            cout << "isosceles Triangle:" << endl;
        }
        else
        {
            cout << "scalene Triangle:" << endl;
        }
    }
};
int main()
{
    int sideA_, sideB_, sideC_;
    cout << "The lengths of Its three sides:" << endl;
    cout << "sideA:";
    cin >> sideA_;
    cout << "sideB:";
    cin >> sideB_;
    cout << "sideC:";
    cin >> sideC_;

    Triangle triangle(sideA_, sideB_, sideC_);

    triangle.determineType();

    return 0;
}