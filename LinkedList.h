#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    ListNode* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        ListNode* newNode = new ListNode(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            ListNode* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        ListNode* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

#endif // LINKED_LIST_H
