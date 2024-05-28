#include <iostream>
using namespace std;

int* cumulativeSum(int* arr, int n){
    int* new_arr = new int[n];
    new_arr[0] = arr[0];
    for (int  i=1; i<n; i++){
        new_arr[i] = new_arr[i-1] + arr[i];
    }
    return new_arr;
}

int main(){
    int arr[] =  {3, 4, 7, 8, 2};
    cumulativeSum(arr, 5);
    return 0;
}