#include <iostream>

using namespace std;

int sum_between(int* arr, int s, int start, int end){
    int sum_all;
    if (s < 1){
        return -1;
    }
    else if (start == end){
        return arr[start];
    }
    else if (start < 0 || end > s)
    {
        return -1;
    }
    else{
        for (int i = start; i <= end; i++){
            sum_all += arr[i];
        }
        return sum_all;
    }
}

int main(){
    int arr[] =  {3, 4, 7, 8, 2};
    cout << sum_between(arr, 5, -1, 8);
    return 0;
}
