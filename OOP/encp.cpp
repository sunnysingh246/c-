#include<iostream>
using namespace std;

class BankAccount {
private:
    string accNumber;
    double balance;

public:
    BankAccount(string accNumb, double initialBalance) {
        accNumber = accNumb;
        initialBalance = balance;
    }

    //getter 
    double getBalance()const {
        return balance;
    }


    //method to deposite money
    void depositeAmount(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else {
            cout << "Invalid amount";
        }
    }


    //method to withdraw
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdwawl amount: " << amount;
        }
        else {
            cout << "Invalid withdrawn amount" << endl;
        }
    }
};


int main() {
    BankAccount myAccount("ae16482fcadv83", 5000);

    myAccount.getBalance();
    myAccount.depositeAmount(200);
    myAccount.withdraw(100);

    return 0;
}