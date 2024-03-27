#include "RandomNumberGenerator.h"
using namespace std;

int RandomGenerator::generateRandomNumber(int min, int max) {
    // Инициализируем генератор случайных чисел с помощью устройства случайных чисел по умолчанию
    std::random_device rd;
    std::mt19937 generator(rd());

    // Создаем равномерное распределение в диапазоне [min, max]
    std::uniform_int_distribution<int> distribution(min, max);

    // Генерируем и возвращаем случайное число
    return distribution(generator);
}