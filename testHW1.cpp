#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Homework1.h"
#include "MedianSelection.h"
#define LENGTH 5001

using namespace std;

int compare(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int
main(int argc, char **argv) {
  int testData[LENGTH];
  srand(time(NULL));

  for (int i = 0; i < LENGTH; ++i)
    testData[i] = rand();

  Homework1 *hw1 = new Homework1();
  int medianIndex = ((MedianSelection *)hw1)->selectMedian(testData, LENGTH);
  int median = testData[medianIndex];
  ((MedianSelection *)hw1)->printMetrics();

  qsort(testData, LENGTH, sizeof(int), compare);

  if (median != testData[(LENGTH - 1) / 2])
    cout << "Incorrect!" << endl;

  delete hw1;
  hw1 = NULL;
  return 0;
}



