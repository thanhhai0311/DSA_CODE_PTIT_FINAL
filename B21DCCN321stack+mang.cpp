#include<bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 100;

struct Stack{
    int top; 
    int data[MAX_SIZE]; 
};


void init(Stack &s){
    s.top = -1;
}

bool isEmpty(Stack s){
    return (s.top == -1);
}

bool isFull(Stack s){
    return (s.top == MAX_SIZE - 1);
}

void push(Stack &s, int item){
    if(isFull(s)){
        cout << "Stack da day" << endl;
        return;
    }
    s.top++; 
    s.data[s.top] = item; 
}

int pop(Stack &s){
    if(isEmpty(s)){
        cout << "Stack rong" << endl;
        return -1;
    }
    int item = s.data[s.top]; 
    s.top--; 
    return item;
}

int top(Stack s){
    if (isEmpty(s)){
        cout << "Stack rong" << endl;
        return -1;
    }
    return s.data[s.top];
}

int main(){
    Stack myStack;
    init(myStack);
    push(myStack, 5);
    push(myStack, 10);
    push(myStack, 15);
    cout << "Phan tu tren cung cua stack: " << top(myStack) << endl;
    pop(myStack);
    cout << "Phan tu tren cung cua stack sau khi pop: " << top(myStack) << endl;
    return 0;
}
