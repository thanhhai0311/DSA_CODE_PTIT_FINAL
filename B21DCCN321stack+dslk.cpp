#include <iostream>

using namespace std;

struct StackNode{
    int data;
    StackNode* next;
};

struct Stack{
    StackNode* top;
};

void push(Stack* stack, int data){
    StackNode* newNode = new StackNode;
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(Stack* stack){
    if(stack->top == NULL){
        cout << "Stack rong" << endl;
        return -1;
    }
    int data = stack->top->data;
    StackNode* temp = stack->top;
    stack->top = stack->top->next;
    delete temp;
    return data;
}

int top(Stack* stack){
    if (stack->top == NULL){
        cout << "Stack rong" << endl;
        return -1;
    }
    return stack->top->data;
}

bool isEmpty(Stack* stack){
    return (stack->top == NULL);
}

int main(){
    Stack* stack = new Stack;
    stack->top = NULL;
    push(stack, 5);
    push(stack, 10);
    push(stack, 15);
    cout << "Phan tu tren cung cua stack: " << top(stack) << endl;
    pop(stack);
    cout << "Phan tu tren cung cua stack sau khi pop: " << top(stack) << endl;
    return 0;
}
