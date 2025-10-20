#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите целое положительное число: ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Число должно быть положительным!" << endl;
        return 1;
    }

    int temp = n; 

    
    while (temp % 2 == 0) {
        temp = temp / 2;
    }

    
    if (temp == 1) {
        cout << n << " является степенью двойки." << endl;
    }
    else {
        cout << n << " НЕ является степенью двойки." << endl;
    }

    return 0;
}