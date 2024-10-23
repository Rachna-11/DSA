// 1 10 11 20 21
// 2 9  12 19 22
// 3 8  13 18 23
// 4 7  14 17 24
// 5 6  15 16 25

#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {
            int val = (n * (j - 1)) + (j % 2 == 0 ? n - i + 1 : i);
            cout << val << "\t"; 
        }
        cout << endl;  
    }
    return 0;
}
