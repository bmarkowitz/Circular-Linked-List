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
void createList(int);


void insertAtBeg();
void insertAtEnd();

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


void createList(int n)
{
    node* newNode;
    node* temp = start;
    
    newNode = getNode();
    
    if(start == nullptr && n > 0)
    {
        start = newNode;
        newNode->next = start;
    }
    else
    {
        for (int i = 0; i < n; i++) {
            while(temp->next != start)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode = start;
        }
    }
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
