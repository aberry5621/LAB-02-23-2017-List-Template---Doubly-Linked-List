//
//  main.cpp
//  LAB 02 23 2017 List Template - Doubly Linked List
//
//  Created by ax on 3/21/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "doublyLinkedListH.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {

    std::cout << "Doubly Linked List Template\n";
    
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
    // test with chars
    lowB = 65, upperB = 90, temp=0;
    List<char> myCharList;
    
    //I. Testing push_front(T p_newValue)
    temp = lowB + rand() % (upperB - lowB);
    cout << "Push " << static_cast<char>(temp) << " to the front." << endl;
    myCharList.push_front(static_cast<char>(temp));
    temp = lowB + rand() % (upperB - lowB + 1);
    cout << "Push " << static_cast<char>(temp) << " to the front." << endl;
    myCharList.push_front(static_cast<char>(temp));
    
    //II. Testing push_back(T p_newValue);
    temp = lowB + rand() % (upperB - lowB + 1);
    cout << "Push " << static_cast<char>(temp) << " to the back." << endl;
    myCharList.push_back(static_cast<char>(temp));
    temp = lowB + rand() % (upperB - lowB + 1);
    cout << "Push " << static_cast<char>(temp) << " to the back." << endl;
    myCharList.push_back(static_cast<char>(temp));
    
    //III. Displaying the list
    cout << "List content:\t";
    myCharList.displayList();
    
    //IV. Popping a front item and a back item
    cout << "\nPopping a front item and a back item..." << endl;
    myCharList.pop_front();
    myCharList.pop_back();
    
    //V. Displaying the list
    cout << "List content:\t";
    myCharList.displayList();
    
    //VI. Pick a value to delete
    cout << "\nFrom the list, pick a number to delete: \t";
    char deleteChar = ' ';
    cin >> deleteChar;
    myCharList.erase(deleteChar);
    
    //VII. Check the final list
    cout << "List content:\t";
    myCharList.displayList();
    
    cout << endl;
    
    return 0;
    
    
}
