#include "RandomNumberGenerator.h"
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    RandomGenerator randomGenerator;

    // Генерируем случайное число в диапазоне от 1 до 10
    int randomNumber = randomGenerator.generateRandomNumber(1, 10);

    // Выводим сгенерированное число
    std::cout << "Случайное число: " << randomNumber << std::endl;

    return 0;
}