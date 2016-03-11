#include "MedianSelection.h"
#include "Homework1.h"

int Homework1::doSelectMedian(void) {
  int length = getDataLength();
  quicksort(0, length - 1);
  return length / 2;
}

void Homework1::quicksort(int start, int end) {
  if (end > start) {
    int pivot = start + (end - start) / 2;
    int nextPivot = 0;
    nextPivot = partition(start, end, pivot);
    quicksort(start, nextPivot - 1);
    quicksort(nextPivot + 1, end);
  }
}

int Homework1::partition(int start, int end, int pivot) {
  int storeIndex = start;
  swap(pivot, end);
  for(int i = start; i < end; i++) {
    if(compare(i, end) == -1) {
      swap(storeIndex, i);
      storeIndex++;
    }
  }
  swap(pivot, storeIndex);
  return storeIndex;
}

Homework1::~Homework1() {}
