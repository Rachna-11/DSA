// sum of 2 array

#include<iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the value of rows: ";
    cin >> row;

    cout << "Enter the value of columns: ";
    cin >> col;
    
    int arr1[row][col],arr2[row][col],sum[row][col];

    cout << "Enter elements of array1:";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            cout << "arr1[" << i << "][" << j << "]="; 
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of array2:";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "arr2[" << i << "][" << j << "]="; 
            cin >> arr2[i][j];
        }
    }
  
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j]= arr1[i][j] + arr2[i][j];
            cout << sum[i][j] << " ";
        }
                cout << endl;
    }
  
}
