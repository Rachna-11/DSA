// A[2][3]={{1,2,3}
//         ,{6,4,8}}

// A[2][3]={{1,6},
//         {2,4},
//         {3,8}}


#include <iostream>
using namespace std;

int main() {
    int A[2][3] =
     {
        {1, 2, 3},
        {6, 4, 8}
    };

    int Box[3][2];

    for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            Box[j][i] = A[i][j];  
        }
    }

    for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
          cout << endl;

    for (int i = 0; i < 3; i++)
     {  
        for (int j = 0; j < 2; j++) 
        {  
            cout << Box[i][j] << " ";
        }
        cout << endl;
    }

}
