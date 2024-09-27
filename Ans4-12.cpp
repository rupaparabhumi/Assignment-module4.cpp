#include <iostream>
using namespace std;

class Swap
{
public:
    int a, b;
    void getData()
    {
        cout << "Enter numbers for swapping:" << endl;
        cin >> a;
        cout << "Enter number for swapping:" << endl;
        cin >> b;
    }
    friend void swap(int A, int B);
};

void swap(Swap s)
{
    s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;
}
void Display(int a, int b)
{
    cout << "\nAfter swapping : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
};

int main()
{
    int a, b;

    Swap S1;
    S1.getData();
    swap(S1.a, S1.b);
    Display(S1.a, S1.b);
}