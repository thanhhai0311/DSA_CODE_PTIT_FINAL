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
	else{
		if(root->val==u){
			makeRoot(root, u, v, c);
		}
		else{
			insertNode(root->left, u, v, c);
			insertNode(root->right, u, v, c);
		}
	}
}

set<int> se;

void kiem_tra_not_la(Node *root, int level){
	if(root->left==NULL && root->right==NULL){
		se.insert(level);
	}
	else{
		if(root->left!=NULL) kiem_tra_not_la(root->left, level+1);
		if(root->right!=NULL) kiem_tra_not_la(root->right, level+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
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
		kiem_tra_not_la(root, 0);
		if(se.size()>1) cout << "0" << endl;
		else cout << "1" << endl;
		se.clear();
	}
}
