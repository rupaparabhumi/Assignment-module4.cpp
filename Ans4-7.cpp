#include <iostream>
using namespace std;

class A
{
public:
    void getA()
    {
        cout << "class A constructor" << endl;
    }
};

class B : public A
{
public:
    void getB()
    {
        cout << "class B constructor" << endl;
    }
};

class C : public B
{
public:
    void getC()
    {
        cout << "class C constructor" << endl;
    }
};

int main()
{
    C C1;
    C1.getA();
    C1.getB();
    C1.getC();
}