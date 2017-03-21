//
//  DoublyLinkedList.hpp
//  LAB 02 23 2017 List Template - Doubly Linked List
//
//  Created by ax on 3/21/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#ifndef DoublyLinkedListH_hpp
#define DoublyLinkedListH_hpp

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



#endif /* DoublyLinkedListH_hpp */
