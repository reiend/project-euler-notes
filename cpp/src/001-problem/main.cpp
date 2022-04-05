
#include "./includes/helpers.h"

#include <iostream>

// problem/situation
// If we list all the natural numbers below 10 that are multiples of 3 or 5,
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

bool isDivisibleBy(int divisiblenNumber, int inputNumber);
void Log(const int message);
void incrementBy(int* data, int incrementNumber); 
void decrementBy(int* data, int decrementNumber);
void freeMemory(int* data);
int sumOfArrayInt(int* data, int length);

int main(int argc, char* argv[]) {

  int* multipleList{new int[0]{}};
  int multipleListLength{0};
  int currentIndexOnArray{0};

  for (int i = 1000; i >= 0; i--) {
    if (isDivisibleBy(3, i) || isDivisibleBy(5, i)) {
      multipleList[currentIndexOnArray] = i;
      incrementBy(&multipleListLength, 1);
      incrementBy(&currentIndexOnArray, 1);
    }
  }

  int multiplesTotal = sumOfArrayInt(multipleList, multipleListLength);
  Log(multiplesTotal);

  freeMemory(multipleList);
  return 0;
}
