#include<bits/stdc++.h>

using namespace std;

typedef struct node{
	int data;
	struct node* left;
	struct node* right;
} *Tree;

void init(Tree* T){
	*T=NULL;
}

Tree GetNode(){
	Tree p;
	p=new node;
	return p; 
}

void FreeNode(Tree p){
	delete(p);
}

int isEmpty(Tree* T){
	if(*T==NULL) return 1;
	return 0;
}

Tree MakeNode(int newdata){
	Tree p;
	p=GetNode();
	p->data=newdata;
	p->left=NULL;
	p->right=NULL;
	return p;
}

Tree Search(Tree T, int x){
	node* p;
	if(T->data==x) return T;
	if(T==NULL) return NULL;
	if(x<(T->left)->data) p=Search(T->left, x);
	else p=Search(T->right, x);
	return p;
}

Tree MakeRoot(Tree T, int newdata){
	if(T==NULL){
		MakeRoot(T, newdata);
	}
	return T;
}

Tree insert(Tree T, int x) {
    if (T == NULL) {
        return MakeNode(x);
    } else if (x < T->data) {
        T->left = insert(T->left, x);
    } else if (x > T->data) {
        T->right = insert(T->right, x);
    }
    return T;
}

void thamtruoc(Tree T){
	if(T!=NULL){
		cout << T->data << " ";
		thamtruoc(T->left);
		thamtruoc(T->right);
	}
}

void thamgiua(Tree T){
	if(T!=NULL){
		thamgiua(T->left);
		cout << T->data << " ";
		thamgiua(T->right);
	}
}

void thamsau(Tree T){
	if(T!=NULL){
		thamsau(T->left);
		thamsau(T->right);
		cout << T->data << " ";
	}
}

int main(){
	
}

