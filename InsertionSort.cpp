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
    ifstream inFile;
    inFile.open("../NationalNames.csv");   // calling data file
    if (! inFile.is_open()) {    // making sure file opens
        cout << "Could not open file." << endl;   // if file doesn't open...
        return 1;   // ... 1 is returned, something bad happened
    }

    ofstream myFile;
    myFile.open ("myFile.txt");
    myFile << "Opening file." << endl;

    // testing if myFile opened
    if (! myFile.is_open()) {
        cout << "Could not open file." << endl;   // if file doesn't open...
        return 1;   //... 1 is returned, something bad happened
    }

    vector<BabyNames> v;

    // populate the vector with the data from your data set
    int n = 4;
    vector <int> newVector(n);
        for (int x:newVector) {
            cout << x << " ";
        }

    // binary insertion sort
    insertionSort(v, v.size());
    int i = 1;
    int x;
    while (i < length(vector)) {
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