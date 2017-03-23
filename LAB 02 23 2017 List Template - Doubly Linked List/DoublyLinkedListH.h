//
//  DoublyLinkedList.hpp
//  LAB 02 23 2017 List Template - Doubly Linked List
//
//  Created by ax on 3/21/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include <iostream>

#ifndef DoublyLinkedListH_h
#define DoublyLinkedListH_h

template<class T>
class List
{
public:
    List();
    
    /*** getters ***/
    int size();
    void displayList();
    
    /*** setter ***/
    //Insert a new value to the container
    void push_front(T p_newValue);
    void push_back(T p_newValue);
    void pop_front();
    void pop_back();
    void erase(T p_eraseItem);
    
private:
    
    int m_size = 0;
    
    struct Node
    {
        T data;
        Node *rlink;
        Node *llink;
    };
    
    Node *dummyHeadPtr = nullptr;
    Node *dummyTailPtr = nullptr;
    Node *movPtr = nullptr;
    Node *temp = nullptr;
};

#endif /* DoublyLinkedListH_h */

// default constructor
template<class T>
List<T>::List(){
    std::cout << "\nList constructor called\n";
    // initialize dummy head and tail linked to each other
    dummyHeadPtr = new Node;
    dummyTailPtr = new Node;
    dummyHeadPtr->rlink = dummyTailPtr;
    dummyTailPtr->llink = dummyHeadPtr;
}

template<class T>
void List<T>::displayList() {
    std::cout << "\ndisplayList called.. \n";
    int counter = 0;
    movPtr = dummyHeadPtr;
    
    while (movPtr != nullptr && counter < 10) {
        std::cout << "List item -- " <<
        "data: " << movPtr->data << " " <<
        "\n";
        movPtr = movPtr->rlink;
        counter++;
    }
}

// add to front of container
template<class T>
void List<T>::push_front(T p_newValue) {
    std::cout << "\npushFront called.. \n";
    temp = new Node;
    temp->data = p_newValue;
    temp->rlink = dummyHeadPtr->rlink;
    temp->llink = dummyHeadPtr;
    dummyHeadPtr->rlink->llink = temp;
    dummyHeadPtr->rlink = temp;
}

// add to back of container
template<class T>
void List<T>::push_back(T p_newValue) {
    std::cout << "\npushBack called.. \n";
    temp = new Node;
    temp->data = p_newValue;
    temp->llink = dummyTailPtr->llink;
    temp->rlink = dummyTailPtr;
    dummyTailPtr->llink->rlink = temp;
    dummyTailPtr->llink = temp;
}

template<class T>
void List<T>::pop_front() {
    temp = dummyHeadPtr->rlink;
    temp->rlink->llink = dummyHeadPtr;
    dummyHeadPtr->rlink = temp->rlink;
    temp->rlink = nullptr;
    temp->llink = nullptr;
    delete temp;
}

template<class T>
void List<T>::pop_back() {
    temp = dummyTailPtr->llink;
    temp->llink->rlink = dummyTailPtr;
    dummyTailPtr->llink = temp->llink;
    temp->rlink = nullptr;
    temp->llink = nullptr;
    delete temp;
}

template<class T>
void List<T>::erase(T p_eraseItem) {

    movPtr = dummyHeadPtr;
    
    while (movPtr != nullptr) {
        if (movPtr->data == p_eraseItem) {
            std::cout << "Found it!\n";
            break;
        }
        movPtr = movPtr->rlink;
    }
    temp = movPtr;
    std::cout << "Temp data is set at: " << temp->data;
    std::cout << std::endl;
    temp->rlink->llink = temp->llink;
    temp->llink->rlink = temp->rlink;
    temp->rlink = nullptr;
    temp->llink = nullptr;
    delete temp;
    
}






















