#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class Account
{
private:
    std::string name;
    float balance; // do NOT round balances to the nearest cent

    
public:
    // Methods
    Account(); // Default contructor; sets account holder's name to "placeholder" and balance to 0.
    Account(std::string pName, float pBalance); // Constructor that initializes the account holder's name and balance. The minimum 

    std::string getName();
    float getBalance();

    bool makeDeposit(float amount);                   // See description below
    bool makeWithdrawal(float amount);                 // See description below
    bool transfer(float amount, Account* recipient); // See description below                   // Prints account info as per format in description
};

#endif
