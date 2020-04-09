#ifndef BINARYINSERTIONSORT_H
#define BINARYINSERTIONSORT_H

#include <vector>
#include "BabyNames.h"
using namespace std;

int binarySearch(vector<BabyNames> a, int item, int low, int high);
void insertionSort(vector<BabyNames> &a, int n);

#endif //BINARYINSERTIONSORT_H
