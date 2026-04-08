#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string holderName;
    float balance;

public:
    void setAccount(int accNo, string name, float bal);
    void deposit(float amount);
    void withdraw(float amount);
    void checkBalance();
};

void BankAccount :: setAccount(int accNo, string name, float bal)
{
    accountNumber = accNo;
    holderName = name;
    balance = bal;
}

void BankAccount :: deposit(float amount)
{
    balance = balance + amount;
    cout << "Amount deposited successfully." << endl;
}

void BankAccount :: withdraw(float amount)
{
    balance = balance - amount;
    cout << "Amount withdrawn successfully." << endl;
}

void BankAccount :: checkBalance()
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder: " << holderName << endl;
    cout << "Current Balance: " << balance << endl;
}

int main()
{
    BankAccount acc1;
    acc1.setAccount(101, "Adam", 5000);
    acc1.deposit(1500);
    acc1.checkBalance();

    return 0;
}