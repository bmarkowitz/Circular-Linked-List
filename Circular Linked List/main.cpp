//
//  main.cpp
//  Circular Linked List
//
//  Created by Brett Markowitz on 7/31/17.
//  Copyright © 2017 Brett Markowitz. All rights reserved.
//

#include <iostream>
using namespace std;

struct node* getNode();

//node structure
struct node {
    int data;
    node* next;
};

node* start = nullptr;


//main function
int main() {
    
    
    
    return 0;
}


struct node* getNode()
{
    node* newNode;
    newNode = new node;
    
    cout << "Enter data to store in the node: ";
    cin >> newNode->data;
    
    start = newNode;
    newNode->next = start;
    
    return newNode;
}
