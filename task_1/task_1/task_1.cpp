#include <iostream>
#include <windows.h>
#include "calculator.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double first_number, second_number, result;
    int operator_number;
    std::cout << "Введите первое число: ";
    std::cin >> first_number;

    std::cout << "Введите второе число: ";
    std::cin >> second_number;

    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operator_number;

    // Выполнение выбранной операции
    switch (operator_number)
    {
    case 1:
        result = add(first_number, second_number);
        std::cout << first_number << " + " << second_number << " = " << result << std::endl;
        break;
    case 2:
        result = subtract(first_number, second_number);
        std::cout << first_number << " - " << second_number << " = " << result << std::endl;
        break;
    case 3:
        result = multiply(first_number, second_number);
        std::cout << first_number << " * " << second_number << " = " << result << std::endl;
        break;
    case 4:
        result = divide(first_number, second_number);
        std::cout << first_number << " / " << second_number << " = " << result << std::endl;
        break;
    case 5:
        result = power(first_number, second_number);
        std::cout << first_number << " в степени " << second_number << " = " << result << std::endl;
        break;
    default:
        std::cout << "Некорректный выбор операции." << std::endl;
        return 1;
    }

    return 0;
}
