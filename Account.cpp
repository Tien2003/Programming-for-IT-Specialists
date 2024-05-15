#include "Account.h"
#include <iostream>

Account::Account()
{
    balance = 0;
    accName = "EMPTY";
}


Account::Account(std::string name)
{
    accName = name;
    balance = 0;
}



// Methods
void Account::deposit(int amount)
{
    if (amount > 0){
        balance += amount;
    }
}

bool Account::withdraw(int amount)
{
    if (amount > 0 && balance > amount){
        balance -= amount;
        return true;
    }
    return false;
}   

void Account::applyInterest(double interest)
{
    balance = balance + balance*interest;
}

void Account::printInfo()
{
    std::cout << "Name: " << accName << ", Balance: " << balance << std::endl;
}