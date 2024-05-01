#include <iostream>

int evenSum(int a, int b) {

    int s = 0;

    if (a > b)
    {
        return (-1);
    }
    else if (a < b)
    {
        for (a; a<=b; a++){
            if (a % 2 == 0){
                s += a;
            }
        }
    }
    return (s);
    
}

int main() {
    int a;
    int b;
    
    std::cout << "Enter the lower bound: ";
    std::cin >> a;
    std::cout << "Enter the upper bound: ";
    std::cin >> b;

    std::cout << evenSum(a, b);

    return 0;
}
