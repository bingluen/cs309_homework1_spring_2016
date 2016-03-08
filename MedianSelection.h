/** This code is modified from Sec. 3.11 of the following book:
 * K. Arnold, J. Gosling and D. Holmes.
 * The Java Programming Language. Addison Wesley, 3rd edition, 2000.
 *
 * PLEASE DO NOT MODIFY THIS FILE
 */

#ifndef MEDIANSELECTION_H
#define MEDIANSELECTION_H

#include <iostream>
#include <climits>

using namespace std;

class MedianSelection {
private:
  int *values;
  int length;
  unsigned long compareCnt;

public:
  /** Invoked to select the median */
  int selectMedian(int *data, int length);

  /** Invoked to print the number of comparisons */
  void printMetrics();

  /** Constructor */
  MedianSelection();

  /** Destructor */
  virtual ~MedianSelection();

protected:
  /** For extended classes to know the number of elements */
  int getDataLength();
  
  /** For extended classes to compare elements */
  int compare(int i, int j);

  /** For extended classes to swap elements */
  void swap(int i, int j);

  /** Extended classes implement this */
  virtual int doSelectMedian();
};

#endif
