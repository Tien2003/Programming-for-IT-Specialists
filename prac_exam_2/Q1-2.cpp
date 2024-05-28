#include <iostream>
using namespace std;

int* maxCoords(int** matrix, int numRows, int numCols){
    int max_value = matrix[0][0];

    int *arr = new int[2];
    for (int i=0; i<numRows; i++){
        for (int j=0; j<numCols; j++){
            if (matrix[i][j] > max_value){
                max_value = matrix[i][j];
                arr[0] = i;
                arr[1] = j;
            }
        }
    }
    // for (int i=0; i<2; i++){
    //     cout<< arr[i];
    // }
    return arr;
}

int main(){
    int numRows = 3;
    int numCols = 4;
    int **matrix = new int*[numRows];
    matrix[0] = new int[numCols]{1, 2, 9, 3};
    matrix[1] = new int[numCols]{6, 1, 7, 2};
    matrix[2] = new int[numCols]{4, 3, 5, 1};
    cout << maxCoords(matrix, 3, 4);
}