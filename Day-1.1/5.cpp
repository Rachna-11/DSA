#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << " Negative" << std::endl;
    } else {
        std::cout << " Not Negative" << std::endl;
    }

}
