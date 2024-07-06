#include "Account.h"
#include <iostream>

Account::Account(){
    name = "placeholder";
    balance = 0.;

}; 
Account::Account(std::string pName, float pBalance){
    name = pName;
    balance = pBalance;
}; 

std::string Account::getName(){
    return name;
};
float Account::getBalance(){
    return balance;
};

bool Account::makeDeposit(float amount){
    if (amount > 0){
        balance += amount;
        return true;
    }
    else{
        return false;
    }
};                   
bool Account::makeWithdrawal(float amount){
    if(amount > balance || amount<0){
        return false;
    }
    else{
        balance -= amount;
        return true;
    }
};
bool Account::transfer(float amount, Account* recipient){
    if (makeDeposit(amount) && makeWithdrawal(amount)){
        balance -= amount;
        recipient->balance = balance- amount;
        return true;
    }
    else{
        return false;
    }
}; 