#include <iostream>
using namespace std;

class SavingAccount {
private:
    int accountNumber;
    double savingBalance;
    string accountHolderName;
public:
    SavingAccount(int accNum, double savBal, string accHolderName) {
        accountNumber = accNum;
        savingBalance = savBal;
        accountHolderName = accHolderName;
    }
    void deposit(double amount) {
        savingBalance += amount;
    }
    void withdraw(double amount) {
        if (savingBalance >= amount) {
            savingBalance -= amount;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
    void interest() {
        double interestAmount = savingBalance * 0.2;
        savingBalance += interestAmount;
    }
    void penalty() {
        if (savingBalance < 500) {
            savingBalance -= 20;
        }
    }
    void show() {
        cout << "Account number: " << accountNumber << endl;
        cout << "Account holder name: " << accountHolderName << endl;
        cout << "Saving balance: " << savingBalance << endl;
    }
};

int main() {
    int accNum;
    double savBal, amount;
    string accHolderName;
    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter account holder name: ";
    cin >> accHolderName;
    cout << "Enter saving balance: ";
    cin >> savBal;
    
    SavingAccount account(accNum, savBal, accHolderName);
    account.show();
    
    cout << "Enter deposit amount: ";
    cin >> amount;
    account.deposit(amount);
    account.show();
    
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    account.withdraw(amount);
    account.show();
    
    account.interest();
    account.show();
    
    account.penalty();
    account.show();
    
    return 0;
}
gedit da.cpp
