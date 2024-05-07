#include <iostream>

int* createArray(int n)
{
    int* arr = new int[n];
    for (int i=0; i<n; i++)
    {
        arr[i] = i;
    }
    return arr;
}