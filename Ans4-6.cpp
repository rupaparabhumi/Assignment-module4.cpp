#include <iostream>
using namespace std;

class Base
{
public:
    int A;

protected:
    int B;

private:
    int C;
};

class Derived : public Base
{
public:
    void display()
    {
        A = 100;
        B = 200;
        cout << "Public:" << A << endl;
        cout << "protected:" << B << endl;
    }
};

int main()
{
    Derived D1;
    D1.display();

    return 0;
}
  
