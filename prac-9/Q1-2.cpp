#include <iostream>
using namespace std;

int** arrayOfArrays(int n_rows, int n_cols){
    int** arr = new int *[n_rows]   ;
    for (int i=0; i<n_rows; i++){
        arr[i] = new int[n_cols];
    }

    for (int i=0; i<n_rows; i++){
        for (int j=0; j<n_cols; j++){
            arr[i][j] = 1;
        }
    }
    return arr;
}