#include <iostream>

int sumArray(int arr[], int n)
{
    int s = 0;
    for(int i=0; i < n; i++)
    {
        s+=arr[i];
    }
    return s;
}