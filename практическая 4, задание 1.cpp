#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите трёхзначное число: ";
    cin >> n;

    
    if (n < 100 || n > 999) {
        cout << "Ошибка! Введите трёхзначное число." << endl;
        return 1;
    }

    int last_digit = n % 10;       
    int first_two_digits = n / 10;  

    int new_number = last_digit * 100 + first_two_digits;

    cout << "Полученное число: " << new_number << endl;

    return 0;
}
