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
	p=Search(T->left, x);
	if(p==NULL) p=Search(T->right, x);
	return p;
}

Tree MakeRoot(Tree T, int newdata){
	if(T==NULL){
		MakeRoot(T, newdata);
	}
	return T;
}

void AddLeft(Tree T, int x, int y){
	Tree p, q;
	p=Search(T, x);
	if(p==NULL){
		cout << "KHONG TIM THAY NODE X DE THEM";
		return ;
	}
	else if((p->left)!=NULL){
		cout << "NODE X DA CO NHANH CAY CON TRAI";
		return ;
	}
	else{
		q=MakeNode(y);
		p->left=q;
	}
}

void AddRight(Tree T, int x, int y){
	Tree p, q;
	p=Search(T, x);
	if(p==NULL){
		cout << "KHONG TIM THAY NODE X DE THEM";
		return ;
	}
	else if((p->right)!=NULL){
		cout << "NODE X DA CO NHANH CAY CON PHAI";
		return ;
	}
	else{
		q=MakeNode(y);
		p->right=q;
	}
}

void RemoveLeft(Tree T, int x){
	Tree p, q;
	p=Search(T, x);
	if(p==NULL){
		cout << "KHONG TIM THAY NODE BEN TRAI DE XOA";
		return ;
	}
	else if((p->left)->right!=NULL || (p->left)->left!=NULL){
		cout << "NODE CHA X CO NHANH CAY CON TRAI";
		return ;
	}
	else{
		q=p->left;
		p->left=NULL;
		delete(q);
	}
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

