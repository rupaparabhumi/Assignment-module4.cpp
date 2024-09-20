#include <iostream>
using namespace std;

class A
{
private:
    int PVE = 100;

protected:
    int PTD = 200;

public:
    int PBC = 300;

    void getPTD()
    {
        cout << "\nProtected:" << PTD;
    }
};

class publicB : public A
{
public:
    int PVE = 100;
    int PBC = 300;
    void getPTD()
    {
        cout << "\nProtected:" << PTD;
    }
    void getPVE()
    {
        cout << "\nPrivate:" << PVE;
    }
    void getPBC()
    {
        cout << "\nPublic:" << PBC;
    }
};

int main()
{
    publicB object;

    object.getPVE();
    object.getPTD();
    object.getPBC();
}
