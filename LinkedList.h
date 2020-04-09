//
// Created by sarra on 3/30/2020.
//

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList{

public:
    //Constructors
    LinkedList();
    LinkedList(const LinkedList & list);
    void swap(LinkedList& other);

    //Assignment Operator
    LinkedList operator=(LinkedList & rhs);

    //Destructor
    ~LinkedList();

    //Functions. You may not need to use them all
    void push(BabyNames obj);
    bool Delete (BabyNames obj);
    BabyNames find (BabyNames obj);
    void printList();
    void InsertionSort();

private:
    Node* head;

};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H