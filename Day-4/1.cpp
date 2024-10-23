#include<iostream>
using namespace std;

int main(){
    int row, col;

    cout << "Enter the value of Row: ";
    cin >> row;

    cout << "Enter the value of Col: ";
    cin >> col;

    int box[row][col];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            cin >> box[i][j];
        }
    }

    int num,rows = 0,cols = 0;
    cout << "Enter any value to find: ";
    cin >> num;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (num == box[i][j])
            {
                rows = i;
                cols = j;
                cout << "Position of " << num << " is at:[" <<rows << ",][" << cols << "]" << endl;
            }
        }
    } 
}
