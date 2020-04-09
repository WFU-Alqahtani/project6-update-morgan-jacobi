#ifndef NODE_H
#define NODE_H
#include "BabyNames.h"

class Node {
public:
    // Node constructor
    Node(BabyNames v , Node* n = nullptr)
    {
        item = v;
        next = n;
    }
    Node() {
        this->item = BabyNames();
        this->next = nullptr;
    }

    //Destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;

    Node GetNext() {
        return *this->next;
    }

    bool operator != (Node* obj) {
        return this->item != obj->item;
    }

    Node &operator =(const Node& obj) {
        this->item = obj.item;
        this->next = obj.next;
    }

private:

    BabyNames item;
    Node* next;

};

#endif //NODE_H
