#include<bits/stdc++.h>

using namespace std;

struct Node{
	int val;
	Node *left;
	Node *right;
	Node(int x){
		val=x;
		left=right=NULL;
	}
};

void makeRoot(Node *root, int u, int v, char c){
	if(c=='L') root->left=new Node(v);
	else root->right=new Node(v);
}

void insertNode(Node *root, int u, int v, char c){
	if(root=NULL) return;
	if(root->val==u){
		makeRoot(root, u, v, c);
	}
	else{
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void levelorder(Node *root){
	queue<Node*> q;
	q.push(root);
	cout << root->val << " ";
	while(!q.empty()){
		Node *tmp=q.front();
		q.pop();
		if(tmp->left!=NULL){
			q.push(tmp->left);
			cout << tmp->left->val << " ";
		}
		if(tmp->right!=NULL){
			q.push(tmp->right);
			cout << tmp->right->val << " ";
		}
	}	
}

int main(){
	Node *root=NULL;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int u, v;
		char c;
		cin >> u >> v >> c;
		if(root==NULL){
			root=new Node(u);
			makeRoot(root, u, v, c);
		}
		else{
			insertNode(root, u, v, c);
		}
	}
	levelorder(root);
}
