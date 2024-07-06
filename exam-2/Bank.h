#ifndef BANK_H
#define BANK_H
#include "Account.h"
#include <string>

class Bank
{
private:
    // Variables
    Account** customers;      // Dynamically allocated array of Account pointers
    int maxCustomers;         // Maximum number of Accounts that can exist in the bank
    int numCustomers;         // Current number of Accounts that are currently in the bank
public:
// Methods
    Bank();                   // Default constructor, sets maxCustomers to 4
    Bank(int pMaxCustomers);  // Constructor that set maxCustomers to a value
    ~Bank();                  // Destructor

    Account** getCustomers();               // Returns the array of Account pointers
    void printAccounts();                   // Print a formatted list of customers and their balances (see below)

    bool addCustomer(Account* newCustomer); // See description below
    void applyInterest(float percent);  
    };      // See description below};
#endif
