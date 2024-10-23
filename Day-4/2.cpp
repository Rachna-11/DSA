// input: 
// 2 4 5
// 5 0 7
// 8 5 2

// output:
// 2 0 5
// 0 0 0
// 8 0 2

#include <iostream>
using namespace std;

int main() {
    
    int matrix[3][3] = {
        {2, 4, 5},
        {5, 0, 7},
        {8, 5, 2}
    };


    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            if ((i == 0 && j == 1) || (i == 1 && j != 0) || (i == 2 && j == 1)) 
            {
                cout << 0 << " ";  
            } 
            else
            {
                cout << matrix[i][j] << " ";  
            }
        }
        cout << endl; 
    }

}
