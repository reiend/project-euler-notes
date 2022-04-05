
#include "./includes/helpers.h"

#include <iostream>


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
