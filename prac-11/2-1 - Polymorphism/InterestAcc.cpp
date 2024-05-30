#include "InterestAcc.h"

InterestAcc::InterestAcc() {
    balance = 0;
    rate = 0.05;
}

InterestAcc::InterestAcc(double pRate){
    rate = pRate;
}

void InterestAcc::monthlyCalc(){
    balance = balance + balance * rate;
    balance = balance - (balance * 0.02);
}