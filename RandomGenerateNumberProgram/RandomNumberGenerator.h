#ifndef RANDOM_GENERATOR_H
#define RANDOM_GENERATOR_H

#include <random>
using namespace std;

class RandomGenerator {
public:
    // ���������� ��������� ����� � ��������� [min, max]
    int generateRandomNumber(int min, int max);
};

#endif // RANDOM_GENERATOR_H