#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    float calculateArea()
    {
        return length * width;
    }
    float calculateperimeter()
    {
        return 2 * length + width;
    }
};
int main()
{
    float length, width, calculateArea, calculateperimeter;

    cout << "Enter the length of the rectangle:";
    cin >> length;
    cout << "Enter the width of the rectangle:";
    cin >> width;

    calculateArea = length * width;
    cout << "Area:=" << calculateArea << endl;

    calculateperimeter = 2 * length + width;
    cout << "perimeter:=" << calculateperimeter;

    return 0;
}
