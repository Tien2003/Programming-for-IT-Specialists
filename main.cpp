#include "Account.h"
#include "Bank.h"
#include <iostream>

int main() {
    // Using the default constructor
    Account account1;
    account1.deposit(1000);
    account1.applyInterest(0.05);  // 5% interest
    account1.printInfo();  // Output: Name: , Balance: 1050

    // Using the parameterized constructor
    Account account2("Rhys");
    account2.deposit(500);
    account2.withdraw(2000);
    account2.printInfo();  // Output: Name: Rhys, Balance: 300


    return 0;
}