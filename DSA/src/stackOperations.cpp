#include <iostream>
#include "linkedList.h"

void Stack_::append(int data_){
    Node_* newNode = new Node_(data_);
    if (head == nullptr){
        head = newNode;
        return;
    } 

    newNode->l_address = head;
    head = newNode;
    return;
}


void Stack_::remove() {
    if (head == nullptr) {
        std::cout << "Element deletion failed: Stack is empty\n";
        return;
    }

    Node_* temp = head;
    head = temp->l_address;
    delete temp;
    return;
}

int Stack_::top() {
    if (head == nullptr) return -1;
    return head->l_data;
}

void Stack_::view() {
    if(head == nullptr) {
        std::cout << "Stack is empty\n";
        return;
    }
    Node_* temp = head;
    int temp_index = 1;
    while(temp->l_address != nullptr) {
        std::cout << "Element at index [" << temp_index << "] : " << temp->l_data << "\n";
        ++temp_index;
    }
    return;
}

