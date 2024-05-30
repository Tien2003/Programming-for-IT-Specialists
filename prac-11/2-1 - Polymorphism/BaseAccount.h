#ifndef BASEACCOUNT_H
#define BASEACCOUNT_H

class BaseAccount
{
protected:
    double balance;
public:
    BaseAccount();                     // Default constructor, should set balance to 0
    void deposit(double amount);       // Add amount to balance
    double getBalance();
    virtual void monthlyCalc();   
};

#endif