#include<bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 100;

struct Queue{
    int front; // chi so phan tu dau tien
    int rear; // chi so phan tu cuoi cung
    int data[MAX_SIZE]; // mang luu cac phan tu
};

void init(Queue &q){
    q.front = -1; 
    q.rear = -1; 
}

bool isEmpty(Queue q){
    return (q.front == -1);
}

bool isFull(Queue q){
    return (q.rear == MAX_SIZE - 1);
}

void push(Queue &q, int item) {
    if(isFull(q)){
        cout << "Hang doi da day" << endl;
        return;
    }
    if(isEmpty(q)){
        q.front = 0; 
    }
    q.rear++; 
    q.data[q.rear] = item; 
}

int front(Queue &q) {
    if(isEmpty(q)){
        cout << "Hang doi rong" << endl;
        return -1;
    }
    int item = q.data[q.front]; 
    q.front++; 
    if(q.front > q.rear){
        init(q);
    }
    return item;
}

int top(Queue q){
    if(isEmpty(q)){
        cout << "Hang doi rong" << endl;
        return -1;
    }
    return q.data[q.front];
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
