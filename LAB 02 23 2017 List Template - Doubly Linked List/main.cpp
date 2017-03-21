//
//  main.cpp
//  LAB 02 23 2017 List Template - Doubly Linked List
//
//  Created by ax on 3/21/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "DoublyLinkedListH.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() {

    std::cout << "Doubly Linked List Template!\n";
    
    srand(static_cast<int> (time(0)));
    
    int lowB = 1;
    int upperB = 100;
    List<int> myList;
    int temp = 0;
    
    //I. Testing push_front(T p_newValue)
    temp = lowB + rand() % (upperB - lowB + 1);
    cout << "Push " << temp << " to the front." << endl;
    myList.push_front(temp);
    temp = lowB + rand() % (upperB - lowB + 1);
    cout << "Push " << temp << " to the front." << endl;
    myList.push_front(temp);
    
    //II. Testing push_back(T p_newValue);
    temp = lowB + rand() % (upperB - lowB + 1);
    cout << "Push " << temp << " to the back." << endl;
    myList.push_back(temp);
    temp = lowB + rand() % (upperB - lowB + 1);
    cout << "Push " << temp << " to the back." << endl;
    myList.push_back(temp);
    
    //III. Displaying the list
    cout << "List content:\t";
    myList.displayList();
    
    //IV. Popping a front item and a back item
    cout << "\nPopping a front item and a back item..." << endl;
    myList.pop_front();
    myList.pop_back();
    
    //V. Displaying the list
    cout << "List content:\t";
    myList.displayList();
    
    //VI. Pick a value to delete
    cout << "\nFrom the list, pick a number to delete: \t";
    int deleteItem = 0;
    cin >> deleteItem;
    myList.erase(deleteItem);
    
    //VII. Check the final list
    cout << "List content:\t";
    myList.displayList();
    
    //You should test with a different data type, example strings
    
    cout << endl;
    return 0;
    
    
}
