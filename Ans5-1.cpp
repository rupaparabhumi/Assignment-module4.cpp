#include <iostream>
using namespace std;

template <class T>
void Swap(T &x, T &y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;
};

int main()
{
    int x, y;
    cout << "Before Swap:";

    cout << "\nEnter the x value is:";
    cin >> x;
    cout << "Enter the y value is:";
    cin >> y;

    Swap(x, y);
    cout << "\nAfter Templates:";
    cout << "\nx value is:" << x;
    cout << "\ny value is:" << y;

    return 0;
}