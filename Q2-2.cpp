#include <iostream>
using namespace std;

int* singleBlock(int n){
    int* arr = new int[n*n];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arr[i*n + j] = i;
        }
    }
    return arr;
}

void setColumn(int* matrix, int n, int c, int newValue){
    for (int i=0; i<n; i++){
        matrix[n*i + c] = newValue;
    }
}
