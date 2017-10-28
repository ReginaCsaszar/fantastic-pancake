//
// Created by jeannie on 2017.10.25..
//

#ifndef LINKED_LIST_LINKEDLISTITEM_HPP
#define LINKED_LIST_LINKEDLISTITEM_HPP

class Node {

public:
    explicit Node(int value)
        : value(value), next(nullptr) {}

    virtual ~Node() {
        delete next;
    }

    Node& getNext() const { return* next; }

    void setNext(Node& item) {
        Node::next = &item;
    }

    int getValue() const {
        return value;
    }

private:
    Node* next;
    int value;
};

#endif //LINKED_LIST_LINKEDLISTITEM_HPP
