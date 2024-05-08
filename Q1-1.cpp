#include <iostream>
using namespace std;

int** identity(int n)        // Create an identity matrix using "array of array" method
{
    int** arr = new int*[n];
    for (int i =0; i<n; i++){
        arr[i] = new int[n];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = 0;
            }
        }
    }

    return arr;
}