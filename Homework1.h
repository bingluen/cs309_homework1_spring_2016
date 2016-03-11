#ifndef HOMEWORK1_H
#define HOMEWORK1_H

#include "MedianSelection.h"

class Homework1 : public MedianSelection {
public:
  ~Homework1();
protected:
  int doSelectMedian(void);
  void quicksort(int start, int end);
  int partition(int start, int end, int pivotIndex);
};

#endif
