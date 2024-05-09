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

    for (int i=0; i<n_rows; i++){
        for (int j=0; j<n_cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i=0; i<n_rows; i++){
        delete [] arr[i];
    }
    delete []arr;

    return arr;
}

int main(){

    arrayOfArrays(8,5);
    return 0;
}