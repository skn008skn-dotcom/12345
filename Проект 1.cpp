#include <iostream>
#include <iomanip>  

int main() {
    const int size = 9;

    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size; ++j) {
            std::cout << std::setw(4) << i * j; 
        }
        std::cout << std::endl;
    }

    return 0;
}