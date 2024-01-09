#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data; //gia tri cac phan tu
    Node* next; //con tro tro den phan tu tiep theo
};

struct Queue{
    Node* front; //con tro tro den phan tu dau tien
    Node* rear; //con tro tro den phan tu cuoi cung
};

void init(Queue &q){
    q.front = NULL;
    q.rear = NULL; 
}

bool isEmpty(Queue q){
    return (q.front == NULL);
}

void push(Queue &q, int item) {
    Node* newNode = new Node; 
    newNode->data = item; 
    newNode->next = NULL;
    if(isEmpty(q)){
        q.front = newNode; 
    }
	else{
        q.rear->next = newNode; 
	}
    q.rear = newNode;
}

int front(Queue &q){
    if(isEmpty(q)){
        cout << "Hang doi rong" << endl;
        return -1;
    }
    int item = q.front->data;
    Node* temp = q.front;
    q.front = q.front->next;
    delete temp; 
    if(q.front == NULL){
        q.rear = NULL;
    }
    return item;
}

int top(Queue q) {
    if(isEmpty(q)){
        cout << "Hang doi rong" << endl;
        return -1;
    }
    return q.front->data;
}

int main(){
    Queue myQueue;
    init(myQueue);
    push(myQueue, 5);
    push(myQueue, 10);
    push(myQueue, 15);
    cout << "Phan tu dau tien trong hang doi: " << front(myQueue) << endl;
    return 0;
}
