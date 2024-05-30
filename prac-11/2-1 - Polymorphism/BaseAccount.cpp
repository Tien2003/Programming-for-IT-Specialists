#include "BaseAccount.h"
#include <iostream>

BaseAccount::BaseAccount(){
    balance = 0;
}
void BaseAccount::deposit(double amount){
    balance += amount;
}
double BaseAccount::getBalance(){
    return balance;
}
void BaseAccount::monthlyCalc(){
    balance -= (0.01*balance + 50);
}