#include <iostream>
using namespace std;

class BankAccount
{
private:
    string Accountnumber;
    float Balance;

public:
    BankAccount(string AccountNumber_, float Balance_)
    {
        Accountnumber = AccountNumber_;
        Balance = Balance_;
    }
    void deposit()
    {
        float deposit;
        cout << "Enter your deposit:";
        cin >> deposit;
        Balance += deposit;
    }
    // functions to withdraw money
    void withdraw()
    {
        float withdraw;
        cout << "Enter your withdraw:";
        cin >> withdraw;
        Balance -= withdraw;
    }
    void Display()
    {
        cout << "Balance:" << Balance;
    }
};
int main()
{
    string AccountNumber_;
    float Balance_;

    cout << "Enter your AccountNumber:" << endl;
    cin >> AccountNumber_;
    cout << "Enter your Balance:" << endl;
    cin >> Balance_;

    BankAccount Bank("AccountNumber_", Balance_);
    Bank.deposit();
    Bank.withdraw();
    Bank.Display();
}