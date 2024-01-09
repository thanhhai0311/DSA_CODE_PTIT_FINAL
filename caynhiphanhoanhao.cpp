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
set<int> se;
string res="Yes";

void check(Node *root, int count){
	if((root->left==NULL && root->right!=NULL) || (root->left!=NULL && root->right==NULL)) res="No";
	else if(root->left==NULL && root->right==NULL){
		se.insert(count);
		if(se.size()>1) res="No";
	}
	else{
		check(root->left, count+1);
		check(root->right, count+1);
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
		res="Yes";
		se.clear();
		check(root, 0);
		cout << res << endl;
	}
}
