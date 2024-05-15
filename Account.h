#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class Account
{
private:
    double balance;
    std::string accName;
    
public:
    Account();
    Account(std::string name);

    // Methods
    void deposit(int amount);              // Deposit amount into balance, only if amount is non-negative
    bool withdraw(int amount);             // Withdraw amount from balance, see description for details
    void applyInterest(double interest);   // Applies interest to account
    void printInfo();                      // Prints account info as per format in description
};

#endif