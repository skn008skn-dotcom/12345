#include <iostream>
#include <windows.h>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");     
    SetConsoleCP(1251);                    
    SetConsoleOutputCP(1251);               

    int n;
    cout << "Введите число: ";
    cin >> n;

    cout << "Делители числа " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}