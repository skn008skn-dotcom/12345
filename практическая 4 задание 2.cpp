#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите двузначное число: ";
    cin >> n;

    
    if (n < 10 || n > 99) {
        cout << "Ошибка! Введите двузначное число (от 10 до 99)." << endl;
        return 1;
    }

    int first_digit = n / 10;   
    int second_digit = n % 10; 

    if (first_digit > second_digit) {
        cout << "Первая цифра больше." << endl;
    }
    else if (second_digit > first_digit) {
        cout << "Вторая цифра больше." << endl;
    }
    else {
        cout << "Цифры равны." << endl;
    }

    return 0;
}