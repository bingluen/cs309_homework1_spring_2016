/** This code is modified from Sec. 3.11 of the following book:
 * K. Arnold, J. Gosling and D. Holmes.
 * The Java Programming Language. Addison Wesley, 3rd edition, 2000.
 *
 * PLEASE DO NOT MODIFY THIS FILE
 */

#include "MedianSelection.h"

int MedianSelection::selectMedian(int *data, int length) {
  values = data;
  this->length = length;
  int medianIndex = doSelectMedian();
  return medianIndex;
}

void MedianSelection::printMetrics() {
  cout << compareCnt << " comparison(s)" << endl;
}

MedianSelection::MedianSelection() {
  compareCnt = 0;
  cout << "Your program will be considered incorrect if this line appears twice or more." << endl;
}

MedianSelection::~MedianSelection() {}

int MedianSelection::getDataLength() {
  return length;
}

int MedianSelection::compare(int i, int j) {
  compareCnt++;
  if (compareCnt == INT_MAX)
    cout << "You have reached the maximum number of comparisons!" << endl;
  int i1 = values[i];
  int i2 = values[j];
  if (i1 == i2)
    return 0;
  else return (i1 < i2 ? -1 : 1);
}

void MedianSelection::swap(int i, int j) {
  int tmp = values[i];
  values[i] = values[j];
  values[j] = tmp;
}

int MedianSelection::doSelectMedian() {
  cout << "Please override me!" << endl;
  return 0;
}

