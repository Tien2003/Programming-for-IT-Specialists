#ifndef BANK_H
#define BANK_H
#include "Account.h"
#include <string>

class Bank
{
    int capacity;
    int numAccounts;
    Account** accounts;

public:
    // Constructors
    Bank();
    Bank(int accCapacity);
    ~Bank();


    // Methods
    void addAccount(Account* acc);            // Add passed account to accounts array if room left
    Account** getAccounts();                  // Return accounts
    int getNumAccounts();
    void applyInterestAll(double interest);   // Apply interest on all accounts}
};
#endif