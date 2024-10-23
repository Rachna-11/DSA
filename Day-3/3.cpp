//90 degree

#include<iostream>
using namespace std;

int main(){

        int row,col;

        cout << "Enter the size of row:";
        cin >> row;

        cout << "Enter the size of col:";
        cin >> col;

        cout << endl;

        int box[row][col];


        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "box[" << i << "][" << j << "]:";
                cin >> box[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << box[i][j] <<" ";
            }
            cout << endl;
        }
         cout << endl;

         for (int  j = 0; j < col; j++)
         {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << box[i][j] << " ";
            }
             cout << endl;
            
         }
}