#include <iostream>
#include "linkedList.h"

void LinkedList_::append_(int data) {
    Node_* newNode = new Node_(data);

    if(head == nullptr) {
        head = newNode;
        length_++;
        return;
    }

    Node_* temp = head;
    while(temp->l_address != nullptr) {
        temp = temp->l_address;
    }
    temp->l_address = newNode;
    length_++;
    return;
}

void LinkedList_::delete_() {
    

    if(head == nullptr) {
        std::cout << "Deletion failed: List is empty\n";
        return;
    }
    Node_* temp = head;
    if (temp->l_address == nullptr) {
        delete head;
        head = nullptr;
        length_++;
        return;
    }
    while(temp->l_address->l_address != nullptr) {
        temp = temp->l_address;
    }
    delete temp->l_address;
    length_--;
    temp->l_address = nullptr;
    return;
    
}


void LinkedList_::delete_at(int index_) {
    if(head == nullptr) {
        std::cout << "Deletion failed: Empty List" << std::endl;
        return;
    }
    

    if (index_ < 1) {
        std::cout << "Deletion failed: Index of List starts from 1 to N, but given index " << index_ << " is in specified range!\n";
        return;
    }

    Node_* temp = head;

    if (index_ == 1) {
        head = head->l_address;
        delete temp;
        length_--;
        return;
    }

    if(length_ < index_){
        std::cout << "List index out of range\n";
        return;
    } 

    temp = head;
    
    Node_* temp2 = nullptr;
    while(index_-- > 1) {
        temp2 = temp;
        temp = temp->l_address;
    }
    temp2->l_address = temp->l_address;
    delete temp;
    length_--;
    return;    
}


void LinkedList_::print_() {
    std::cout << "\n";
    if (head==nullptr) {
        std::cout << "List is empty!\n";
        return;
    }

    Node_* temp = head;
    int temp_index = 1;
    while(temp->l_address != nullptr) {
        std::cout << "Element at index[" << temp_index << "] : " << temp->l_data << "\n";
        temp = temp->l_address;
        ++temp_index;
    } 
    return;
}


void LinkedList_::insert_at(int element, int index_){
    Node_* newNode = new Node_(element);
    if (head == nullptr){
        head = newNode;
        return;
    }

    if (index_ == 1) {
        Node_* temp = head;
        newNode->l_address = temp;
        head = temp;
        length_++;
    }

    if (length_ < index_) {
        std::cout << "\nInsertion failed: List index out of range!\n";
        return;
    }

    Node_* temp = head;

    int temp_i = 1;
    while(true) {
        ++temp_i;
        if (temp_i == index_) break; 
        temp = temp->l_address;
    }
    newNode->l_address = temp->l_address;
    temp->l_address = newNode;
    length_++;
    return;
}

