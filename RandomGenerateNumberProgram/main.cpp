#include "RandomNumberGenerator.h"
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    RandomGenerator randomGenerator;

    // ���������� ��������� ����� � ��������� �� 1 �� 10
    int randomNumber = randomGenerator.generateRandomNumber(1, 10);

    // ������� ��������������� �����
    std::cout << "��������� �����: " << randomNumber << std::endl;

    return 0;
}