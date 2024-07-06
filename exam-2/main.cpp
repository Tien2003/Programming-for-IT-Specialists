#include <iostream>
#include "Bank.h"
#include "Account.h"

int main() {
    Account a1("a", 100);
    Account a2("b", 10);
    Account a3("c", 2000);
    Account a4("d", 90);


    std::cout << a1.makeWithdrawal(10)<<std::endl;
    std::cout << a1.getBalance()<<std::endl;

    a1.transfer(50, &a2);
    std::cout << a1.getBalance()<<std::endl;
    std::cout << a2.getBalance()<<std::endl;





    Bank bank;
    bank.addCustomer(&a1);
    bank.addCustomer(&a2);
    bank.addCustomer(&a3);
    bank.addCustomer(&a4);

    return 0;
}