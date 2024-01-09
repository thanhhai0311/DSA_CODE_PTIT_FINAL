#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void insertAtBeginning(int newData){
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    newNode->prev = NULL;
    if(head != NULL){
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtEnd(int newData){
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = NULL;
    Node* current = head;
    if(current == NULL){
        newNode->prev = NULL;
        head = newNode;
        return;
    }
    while(current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

void printList(){
    Node* current = head;
    if(current == NULL){
        cout << "List is empty" << endl;
        return;
    }
	cout << "List: ";
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main(){
    insertAtBeginning(1);
    insertAtBeginning(2);
    insertAtEnd(3);
    insertAtEnd(4);
    printList();
    return 0;
}
