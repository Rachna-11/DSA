

#include<iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int box[rows][cols];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> box[i][j];
        }
    }

    int maxvalue = box[0][0];
    int Row = 0, Col = 0;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (box[i][j] > maxvalue)
             {
                maxvalue = box[i][j];
                Row = i;
                Col = j;
            }
        }
    }

    cout << "Maximum value is: " << maxvalue << endl;
    cout << "Position of the value: [" << Row << "],[" << Col << "]" << endl;
}
