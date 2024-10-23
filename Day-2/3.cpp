#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of  diagonal: ";
    cin >> n;

    int box[n][n];
    
    cout << "Enter elements of the diagonal:\n";
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            cin >> box[i][j];
        }
    }

    int DiagonalSum = 0;
    int AntiDiagonalSum = 0;

    for (int i = 0; i < n; i++) 
    {
        DiagonalSum += box[i][i];            
        AntiDiagonalSum += box[i][n - i - 1];  
    }

    cout << "Sum of the diagonal: " << DiagonalSum << endl;
    cout << "Sum of the Anti diagonal: " << AntiDiagonalSum << endl;

}
