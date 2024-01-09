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
	if(root==NULL) return;
	if(root->val==u){
		makeRoot(root, u, v, c);
	}
	else{
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void sprial_order(Node *root){
	stack<Node*> st1;
	stack<Node*> st2;
	st1.push(root);
	while(!st1.empty() || !st2.empty()){
		while(!st1.empty()){
			Node *tmp=st1.top();
			st1.pop();
			cout << tmp->val << " ";
			if(tmp->right!=NULL){
				st2.push(tmp->right);
			}
			if(tmp->left!=NULL){
				st2.push(tmp->left);
			}
		}
		while(!st2.empty()){
			Node *tmp=st2.top();
			st2.pop();
			cout << tmp->val << " ";
			if(tmp->left!=NULL){
				st1.push(tmp->left);
			}
			if(tmp->right!=NULL){
				st1.push(tmp->right);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Node *root;
		root=NULL;
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
		sprial_order(root);
		cout << endl;
	}
}
