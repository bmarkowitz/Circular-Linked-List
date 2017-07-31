//
//  main.cpp
//  Circular Linked List
//
//  Created by Brett Markowitz on 7/31/17.
//  Copyright © 2017 Brett Markowitz. All rights reserved.
//

#include <iostream>
using namespace std;


//function prototypes
struct node* getNode();
void insertAtBeg();

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
    newNode->next = nullptr;
    
    return newNode;
}

void insertAtBeg()
{
    node* newNode = getNode();
    
    if(start == nullptr)
    {
        start = newNode;
        return;
    }
    else if(start->next == nullptr)
    {
        newNode->next = start; //new node points to current start node
        start->next = newNode; //current start points back to new node, which will be start
        start = newNode; //new node becomes start
        return;
    }
    else
    {
        newNode->next = start;
        start = newNode;
    }
}
