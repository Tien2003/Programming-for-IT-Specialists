#ifndef INTERESTACC_H
#define INTERESTACC_H
#include "BaseAccount.h"

class InterestAcc : public BaseAccount
{
private:
    double rate;
public:
    InterestAcc();                     // Sets balance to 0, rate to 0.05
    InterestAcc(double pRate);
    virtual void monthlyCalc();                // Applies interest and fees to balance

};


#endif