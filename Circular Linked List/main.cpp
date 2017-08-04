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

void displayList();


//node structure
struct node {
    int data;
    node* next;
};

node* start = nullptr;


//main function
int main() {
    
    int choice;
    
    cout << "Enter the number of nodes to create in the list: ";
    cin >> choice;
    
    createList(choice);
    
    insertAtEnd();
    
    displayList();
    
    
    
    return 0;
}


void createList(int n)
{
    node* newNode = nullptr;
    node* temp;
    
    for (int i = 0; i <n; i++) {
        newNode = getNode();
        if(start == nullptr)
        {
            newNode->next = start;
            start = newNode;
        }
        else
        {
            temp = start;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    newNode->next = start;
    
}










struct node* getNode()
{
    node* newNode;
    newNode = new node;
    
    cout << "Enter data to store in the node: ";
    cin >> newNode->data;
    
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

void insertAtEnd()
{
    node* newNode = getNode();
    node* temp;
    
    if(start == nullptr)
    {
        start = newNode;
        newNode->next = start;
    }
    else
    {
        temp = start;
        while(temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = start;
        cout << "The data was inserted at the end of the list.\n";
    }
}

void displayList()
{

    node* temp;
    if(start == nullptr)
    {
        cout << "The list is empty.";
        return;
    }
    else
    {
        temp = start;
        do {
            cout << temp->data << endl;
            temp = temp->next;
        } while (temp != start);
    }
}
