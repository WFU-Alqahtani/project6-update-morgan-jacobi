#include <iostream>
#include <fstream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main() {

    string filename;
   //read the file name of your dataset
   ofstream myFile;
   myFile.open ("NationalNames.csv");
   myFile << "Opening file." << endl;

    vector<BabyNames> v;

    // populate the vector with the data from your data set
    int n = 4;
    vector <int> newVector(n);
        for (int x:newVector) {
            cout << x << " ";
            return 0;

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
        //you should override << to BabyNames
        cout << v[i] << endl;
    }

    myFile.close();
    return 0;

}