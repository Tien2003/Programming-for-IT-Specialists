#include <iostream>
using namespace std;

int* createArray(int n)
{
    int* arr = new int[n];
    for (int i=0; i<n; i++)
    {
        arr[i] = i;
    }
    return arr;
}




// 4.1
void create2DArray(){
    int num_col;
    int num_row;

    cout << "column: "; cin >> num_col;
    cout <<"row: "; cin >> num_row;

    int **arr = new int *[num_row];
    for (int i=0; i<num_row; i++){
        arr[i] = new int[num_col];
    }

    for (int i=0; i<num_row; i++){
        for (int j=0; j<num_col; j++){
            cin >> arr[i][j];
        }
    }


// 4.2
    int k;
    cout << "column index";
    cin >> k;
    for (int i=0; i<num_row; i++){
        arr[i][k] = -1;
    }

    cout << "array: " << endl;
    for (int i = 0; i < num_row; i++) {
        for (int j = 0; j < num_col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    delete arr;
}


// 5.1
void create2DArray_singleBlockMemory(){
    int num_col;
    int num_row;

    cout << "column: "; cin >> num_col;
    cout <<"row: "; cin >> num_row;

    int *arr = new int [num_row * num_col];

    for (int i=0; i<num_row; i++){
        for (int j=0; j<num_col; j++){
            cin >> arr[i * num_row + j];
        }
    }

    cout << "array: " << endl;
    for (int i = 0; i < num_row; i++) {
        for (int j = 0; j < num_col; j++) {
            cout << arr[i*num_row + j] << " ";
        }
        cout << endl;
    }

// 5.1
    int k;
    cout << "column index";
    cin >> k;
    for (int i=0; i<num_row; i++){
        arr[i*num_row + k] = -1;
    }

       cout << "new array: " << endl;
    for (int i = 0; i < num_row; i++) {
        for (int j = 0; j < num_col; j++) {
            cout << arr[i*num_row + j] << " ";
        }
        cout << endl;
    }
}

int main(){
    // int n=5;
    // int* arr = createArray(n);

    // for (int i=0; i<n; i++)
    // {
    //     // Print values of array
    //     std::cout << arr[i];
    // }
    // create2DArray();
    create2DArray_singleBlockMemory();

    return 0;
}