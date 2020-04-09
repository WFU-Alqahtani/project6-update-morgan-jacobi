#include <iostream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "Node.h"
using namespace std;

int main() {

    string filename;
   //read the file name of your dataset

    vector<BabyNames> v;

    // populate the vector with the data from your data set

    // binary insertion sort
    insertionSort(v, v.size());
    int i = 1;
    int x;
    while (i < length(LinkedList)) {
        x = LinkedList[i];

    }

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should override << to YourClass
        cout << v[i] << endl;
    }

    // FINISH ME

}