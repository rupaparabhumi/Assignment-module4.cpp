#include <iostream>
using namespace std;

class String
{
public:
    string str1, str2;
    void getstr1()
    {
        cout << "\nstring1:" << str1;
    }
    void getstr2()
    {
        cout << "\nstring2:" << str2;
    }
};

int main()
{
    string str1;
    string str2;

    cout << "Enter your str1:";
    cin >> str1;
    cout << "Enter your str2:";
    cin >> str2;

    cout << "\nconcatenate the two string:\n"
         << str1 << str2;
}