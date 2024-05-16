#include "Bank.h"
#include "Account.h"
#include <iostream>

Bank::Bank()
{
    capacity = 6;
    numAccounts = 0;
    accounts = new Account*[capacity];
}

Bank::Bank(int accCapacity)
{
    capacity = accCapacity;
    numAccounts = 0;
    accounts = new Account*[capacity];
}

Bank::~Bank()
{
    for (int i=0; i<numAccounts; i++)
    {
        delete accounts[i];
    }
    delete [] accounts;
}

void Bank::addAccount(Account* acc)
{
    if (numAccounts < capacity)
    {
        accounts[numAccounts] = acc;
        numAccounts += 1;
    }
}   

Account** Bank::getAccounts()
{
    return accounts;
}

int Bank::getNumAccounts()
{
    return numAccounts;
}

void Bank::applyInterestAll(double interest)
{
    for (int i = 0; i<numAccounts; i++){
        accounts[i] -> applyInterest(interest);
    }
}