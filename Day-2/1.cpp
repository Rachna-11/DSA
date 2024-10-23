// sum of all elements ans average

#include<iostream>
using namespace std;

int main() {
    int row, col, sum=0,total,avg;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    int box[row][col];

    for (int i = 0; i < row; i++)
     {
         cout << "Enter the elements of the array:\n";
        for (int j = 0; j < col; j++)
         {
            cout << "box[" << i << "][" << j << "]="; 
            cin >> box[i][j];
        }
    }

    cout << "The elements of the array are:\n";
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
         {
            cout << box[i][j] << " ";
            sum += box[i][j];
        }
        cout << endl;
    }

    avg = row * col;
    total= sum /avg;

     cout << "Sum of all elements: " << sum << endl;
     cout << "Average of all elements: " << total << endl;

  
}
