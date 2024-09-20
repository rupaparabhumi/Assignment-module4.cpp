#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    // Member function to calculate the area of the circle
    float calculatearea()
    {
        return 3.14 * radius * radius;
    }

    float calculateCircumference()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    float radius, calculatearea, calculateCircumference;

    cout << "Enter the Radius of Circle: ";
    cin >> radius;

    calculatearea = 3.14 * radius * radius;
    cout << "\nArea  = " << calculatearea;

    calculateCircumference = 2 * 3.14 * radius;
    cout << "\nCircumference =" << calculateCircumference;

    return 0;
}