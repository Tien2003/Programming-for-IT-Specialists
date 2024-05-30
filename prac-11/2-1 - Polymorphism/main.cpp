#include "BaseAccount.h"
#include "InterestAcc.h"
#include<iostream>

using namespace std;

int main(){
    InterestAcc acc;
    acc.deposit(100);
    cout << acc.getBalance() << endl;
    acc.monthlyCalc();
    cout << "monthly" << acc.getBalance() << endl;

    acc.deposit(500.0);
    cout << "Balance"<< acc.getBalance() << endl;

    acc.monthlyCalc();
    cout << "monthly" << acc.getBalance() << endl;


    return 0;
}