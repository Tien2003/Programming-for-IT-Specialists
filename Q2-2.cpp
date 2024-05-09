#include <iostream>
using namespace std;


void setColumn(int* matrix, int n, int c, int newValue){
    for (int i=0; i<n; i++){
        matrix[n*i + c] = newValue;
    }
}
