#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *head=NULL;

void insert(int new_data){
	struct Node* new_node=new Node;
	new_node->data=new_data;
	new_node->next =head;
	head=new_node;
}

void insert_pos(int pos, int value){
	Node *pre=new Node;
	Node *cur=new Node;
	Node *tmp=new Node;
	cur=head;
	for(int i=1; i<pos; i++){
		pre=cur;
		cur=cur->next;
	}
	tmp->data=value;
	tmp->next=cur;
	pre->next=tmp;	
}

void del(int pos){
	Node *pre=new Node;
	Node *cur=new Node;
	cur=head;
	for(int i=1; i<pos; i++){
		pre=cur;
		cur=cur->next;
	}
	pre->next=cur->next;
}

void repl(int pos, int value){
	Node *ptr=new Node;
	ptr=head;
	for(int i=1; i<pos; i++){
		ptr=ptr->next;
	}
	ptr->data=value;
}

void display(){
	struct Node *ptr=head;
	while(ptr!=NULL){
		cout << ptr->data << " ";
		ptr=ptr->next;
	}
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	del(3);
	display();
	cout << endl;
	repl(2, 10);
	display();
}
