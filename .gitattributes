#include <iostream>
#include <random>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "Russian"); 

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 100);

    int secret = distr(gen);
    int guess;

    std::cout << "Угадай число от 0 до 100!\n";

    while (true)
    {
        std::cin >> guess;
        if (guess == secret)
        {
            std::cout << "Угадал!\n";
            break;
        }
        else if (guess < secret)
        {
            std::cout << "Надо больше\n";
        }
        else
        {
            std::cout << "Надо меньше\n";
        }
    }

    return 0;
