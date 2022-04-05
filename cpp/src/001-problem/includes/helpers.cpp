
#include "./helpers.h"
#include <iostream>

#ifndef HELPERS_H

bool isDivisibleBy(int divisibleNumber, int inputNumber) {
  return inputNumber % divisibleNumber == 0;
}

void Log(const char* message) { std::cout << message; }

void Log(const int message) { std::cout << message; }

void incrementBy(int* data, int incrementNumber) { *data += incrementNumber; }

void decrementBy(int* data, int decrementNumber) { *data += decrementNumber; }

void freeMemory(int* data) {
  delete[]  data;
  data = nullptr;
}

int sumOfArrayInt(int* data, int length) {
  int multiplesTotal{0};
  for (int i = 0; i < length; i++) {
    incrementBy(&multiplesTotal, data[i]);
  }
  return multiplesTotal;
}

#endif
