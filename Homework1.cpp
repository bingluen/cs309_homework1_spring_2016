#include "MedianSelection.h"
#include "Homework1.h"

int Homework1::doSelectMedian(void) {
  for (int i = 0; i < getDataLength(); ++i)
    for (int j = i + 1; j < getDataLength(); ++j)
      if (compare(i, j) > 0)
        swap(i, j);

  return (getDataLength() - 1) / 2;
}

Homework1::~Homework1() {}



