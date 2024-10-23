#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

     int arr[rows][cols];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int Row, Col;
    cout << "Enter the row to sum ): ";
    cin >> Row;

    cout << "Enter the column to sum ): ";
    cin >> Col;

    int rowSum = 0;
    for (int j = 0; j < cols; j++) 
    {
        rowSum += arr[Row][j];
    }

    int colSum = 0;
    for (int i = 0; i < rows; i++)
     {
        colSum += arr[i][Col];
    }

    cout << "Sum of row " << Row << " is: " << rowSum << endl;
    cout << "Sum of column " << Col << " is: " << colSum << endl;

   
}
