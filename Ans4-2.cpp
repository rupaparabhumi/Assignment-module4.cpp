#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width = 20;
    void getwidth()
    {
        cout << "\nwidth:" << width;
    }
};
class RectangleA : public Rectangle
{
public:
    int height = 80;
    int result = width * height;
    void getheight()
    {
        cout << "\nheight:" << height;
    }
    void getresult()
    {
        cout << "\nresult:" << result;
    }
};

int main()
{
    RectangleA Rect;
    cout << "----Area of the Rectangle is---" << endl;
    Rect.getwidth();
    Rect.getheight();
    Rect.getresult();
}
