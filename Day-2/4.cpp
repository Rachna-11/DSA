#include<iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    int box[row][col];

    cout << "Enter elements of the box:\n";
    for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < col; j++) 
        {
            cin >> box[i][j];
        }
    }

    int boundarySum = 0;

    for (int j = 0; j < col; j++) 
    {
        boundarySum += box[0][j];
    }

    if (row > 1) 
    {
        for (int j = 0; j < col; j++)
         {
            boundarySum += box[row - 1][j];
        }
    }

    for (int i = 1; i < row - 1; i++)
     {
        boundarySum += box[i][0];
    }

    if (col > 1)
     {
        for (int i = 1; i < row - 1; i++) 
        {
            boundarySum += box[i][col - 1];
        }
    }

    cout << "Sum of boundary elements: " << boundarySum << endl;

}
