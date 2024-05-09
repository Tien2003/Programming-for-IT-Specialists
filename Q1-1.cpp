#include <iostream>

using namespace std;

void evenPositions(int* arr, int n){
    for (int i=0; i<n; i++){
        if (arr[i] % 2 == 0){
            cout << i << endl;
        }
    }
}