#include <iostream>
using namespace std;

class Calculate
{
public:
        float pi = 3.14;
        float AreaCricle(float r)
        {
                float AreaCricle;
                AreaCricle = pi * r * r;
                return AreaCricle;
        }

        float AreaRectangle(float l, float b)
        {
                float AreaRectangle;
                AreaRectangle = l * b;
                return AreaRectangle;
        }
        float AreaTriangle(float b, float h)
        {
                float AreaTriangle;
                AreaTriangle = b * h * 1 / 2;
                return AreaTriangle;
        }
};
int main()
{
        float r, l, b, breadth, h;

        cout << "Enter your r:";
        cin >> r;
        cout << "Enter your l:";
        cin >> l;
        cout << "Enter your b:";
        cin >> b;
        // cout << "Enter your breadth:";
        // cin >> breadth;
        cout << "Enter your h:";
        cin >> h;
        Calculate C1;
        cout << "--------------------" << endl;
        cout << "Area of circle:" << C1.AreaCricle(r) << endl;
        cout << "Area of Rectangle:" << C1.AreaRectangle(l, b) << endl;
        cout << "Area of Triangle:" << C1.AreaTriangle(b, h) << endl;

        return 0;
}
