#include <iostream>
using namespace std;
float Balance = 0;

class BankAccount
{
    string NameDepositor;
    int AccountNumber;
    string TypeAccount;
    float Balance;

public:
    BankAccount(string NameDeposit_, int AccNum_, string TypeAcc_, float Bal_)
    {
        NameDepositor = NameDeposit_;
        AccountNumber = AccNum_;
        TypeAccount = TypeAcc_;
        Balance = Bal_;
    }

    void deposit()
    {
        int Deposit;

        cout << "Enter your Deposit Amount:";
        cin >> Deposit;
        Balance += Deposit;
    }
    void withdraw()
    {
        int withdraw;
        cout << "Enter your withdraw Amount:";
        cin >> withdraw;
        if (withdraw > Balance)
            cout << "\n Cannot Withdraw Amount";
        Balance -= withdraw;
    }
    void display()
    {
        cout << "\nName of Depositor:" << NameDepositor;
        cout << "\nAccount number:" << AccountNumber;
        cout << "\nType Account:" << TypeAccount;
        cout << "\nBalance:" << Balance;
    }
};
int main()
{
    string NameDeposit_;
    int AccNum_;
    string TypeAcc_;
    float Bal_;

    cout << "Enter your Details";
    cout << "\nName of Depositor:";
    cin >> NameDeposit_;
    cout << "AccountNumber:";
    cin >> AccNum_;
    cout << "TypeAccount:";
    cin >> TypeAcc_;
    cout << "Balance:";
    cin >> Bal_;

    BankAccount Bank(NameDeposit_, AccNum_, TypeAcc_, Bal_);
    Bank.deposit();
    Bank.withdraw();
    Bank.display();
    return 0;
}
