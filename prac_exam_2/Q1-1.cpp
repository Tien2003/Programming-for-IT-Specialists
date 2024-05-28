#include <iostream>

using namespace std;

void evenPositions(int* arr, int n){
    for (int i=0; i<n; i++){
        if (arr[i] % 2 == 0){
            cout << i << endl;
        }
    }
}

int main(){
    int arr[] =  {3, 4, 7, 8, 2};
    evenPositions(arr, 5);
    
    return 0;
}