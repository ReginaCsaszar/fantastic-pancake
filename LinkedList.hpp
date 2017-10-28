//
// Created by jeannie on 2017.10.25..
//

#ifndef LINKED_LIST_LINKEDLIST_HPP
#define LINKED_LIST_LINKEDLIST_HPP

#include <vector>
#include <stdexcept>
#include "Node.hpp"

class LinkedList {

public:
    LinkedList() = default;
    virtual ~LinkedList() = default;

    void add(int item) {
        if (lastItem == nullptr) {
            lastItem = new Node(item);
            head = lastItem;
        } else {
            Node* temp = lastItem;
            lastItem = new Node(item);
            temp->setNext(*lastItem);
        }
    }

    void add(int item, unsigned index) {
        Node* before = &getNode(index-1);
        Node* after = &before->getNext();
        Node* temp = new Node(item);
        before->setNext(*temp);
        temp->setNext(*after);
    }

    int last() const { return lastItem->getValue(); }

    int first() const { return head->getValue(); }

    unsigned getSize() const {return size;}

    int get(unsigned index) const {
        Node* temp = &getNode(index);
        return temp->getValue();
    }

    void remove(unsigned index) {
        if (index > 0) {
        Node* before = &getNode(index-1);
        Node* temp = &before->getNext();
        before->setNext(temp->getNext());
        } else {
            Node* temp = head;
            *head = temp->getNext();
        }
    }

    void remove(int item) {
        unsigned i = 0;
        Node* temp = head;
        do {
            if (temp->getValue() == item) break;
            temp = &temp->getNext();
            i++;
        } while (temp == nullptr);
        remove(i);
    }

private:
    Node* lastItem = nullptr;
    Node* head = nullptr;
    unsigned size = 0;

    Node& getNode(unsigned index) const {
        Node* temp = head;
        do {
            if (index == 0 ) return *temp;
            index--;
            *temp = temp->getNext();
        } while (temp == nullptr);
    }
};

#endif //LINKED_LIST_LINKEDLIST_HPP
