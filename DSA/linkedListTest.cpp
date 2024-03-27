#include "linkedList.h"
#include <iostream>


int main(int argc, const char* argv[]) {
    LinkedList_ myList;
    myList.print_();
    myList.append_(7);
    myList.append_(5);
    myList.append_(9);
    myList.append_(2);
    myList.print_();
    myList.insert_at(6, 2);
    myList.print_();
    myList.delete_at(2);
    myList.print_();
}