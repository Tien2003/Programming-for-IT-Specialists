#include "Bank.h"
#include "Account.h"
#include <iostream>

// Variables
Account** customers;      // Dynamically allocated array of Account pointers
int maxCustomers;         // Maximum number of Accounts that can exist in the bank
int numCustomers;         // Current number of Accounts that are currently in the bank

// Methods
Bank::Bank(){
    maxCustomers = 4;
};                   
Bank::Bank(int pMaxCustomers){
    maxCustomers = pMaxCustomers;
};  
Bank::~Bank()
{
    for (int i = 0; i<numCustomers; i++){
        delete customers[i];
    }
    
};            

Account** getCustomers(){
    return customers;
};               
void Bank::printAccounts(){
    for (int i=0; i<numCustomers; i++){
        std::cout << customers[i]->getName() <<" :$ " << customers[i]->getBalance() << std::endl;
    }
};              

bool Bank::addCustomer(Account* newCustomer){
    if (numCustomers < maxCustomers){
        customers[numCustomers] = newCustomer;
        numCustomers ++;
        return true;
    }
    else{
        return false;
    }
}; 
void Bank::applyInterest(float percent){

        };    
