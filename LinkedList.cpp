//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"

// constructors
LinkedList::LinkedList() {
}

LinkedList::LinkedList(const LinkedList & list) {
    this->head = list.head;
}

void LinkedList::swap(LinkedList& other) {
    using std::swap;
    swap(head, other.head);
}

// assignment operators
LinkedList LinkedList::operator=(LinkedList & rhs){
    this->swap(rhs);
    return *this;
}

// destructor
LinkedList::~LinkedList() {
    delete [] head;
}

void LinkedList::push (BabyNames obj) {
    Node* newNode = new Node(obj);
    newNode->next = this->head;
    this->head = newNode;
}

bool LinkedList::Delete (BabyNames obj) {
    Node* pastNode = new Node();
    while (this->head->next != nullptr) {
        if (head->item != obj) {
            pastNode = head;
            *head = head->GetNext();
        }
        else {
            *pastNode->next = head->GetNext();
            delete(head);
            return true;
        }
    }
    return false;
}

BabyNames find(BabyNames obj){

}


void LinkedList::printList() {
    Node *tmp = head;
    while (tmp != nullptr) {
        cout << tmp->next << endl;
        tmp = tmp->next;
    }
}

void LinkedList::InsertionSort() {
    Node* start = this->head;
    while (this->head->next != nullptr) {
        if (head->item > ) {

        }
    }
}


