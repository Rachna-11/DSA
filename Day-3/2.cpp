#include<iostream>
using namespace std;

int main()
{

    int A[3][3] = {{1, 2, 3}, 
                   {4, 5, 6}, 
                   {7, 8, 9}};

    int size = 3 * 3; 
    int B[size];

    int k = 0; 
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            B[k] = A[i][j]; 
            k++;
        }
    }

    cout << "1D Array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << B[i] << " ";
    }
    cout << endl;

}
