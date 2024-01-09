#include<bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 100;

struct Stack{
    char top; 
    char data[MAX_SIZE]; 
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

void push(Stack &s, char item){
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
    char item = s.data[s.top]; 
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
	int t;
	cin >> t;
	cin.ignore();
 	while(t--){
 		string s;
		getline(cin, s);
		Stack myStack;
		init(myStack);
		int check=0;
		for(auto x : s){
			if(x!=')'){
				push(myStack, x);
			}
			else{
				bool ok=true;
				while(top(myStack)!='('){
					char tmp=top(myStack);
					if(tmp=='+' || tmp=='-' || tmp=='*' || tmp=='/'){
						ok=false;
					}
					pop(myStack);
				}
				pop(myStack);
				if(ok==true){
					cout << "Yes" << endl;
					check=1;
					break;
				}
			}
		}
		if(check==1) continue;
		cout << "No" << endl;
	}
}
		
		

