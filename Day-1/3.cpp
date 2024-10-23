#include <iostream>

// 1  10 11 20 21
// 2  9  12 19 22
// 3  8  13 18 23
// 4  7  14 17 24
// 5  6  15 16 25

int main() {
    const int n = 5; 
    int matrix[n][n]; 
    int num = 1;

    for (int col = 0; col < n; col++)
     {
        if (col % 2 == 0) 
        { 
            for (int row = 0; row < n; row++)
            {
                matrix[row][col] = num++;
            }
        } 
        else 
        {  
            for (int row = n - 1; row >= 0; row--)
             {
                matrix[row][col] = num++;
            }
        }
    }

    for (int row = 0; row < n; row++) 
    {
        for (int col = 0; col < n; col++)
        {
            std::cout << std::setw(3) << matrix[row][col] << " ";
        }
        std::cout << std::endl;
    }

}
