//#include<bits/stdc++.h>
//
//using namespace std;
//
//struct Node{
//	int data;
//	Node* left;
//	Node* right;
//};
//
//Node* makeNode(int x){
//	Node* newNode= new Node;
//	newNode->data=x;
//	newNode->left=NULL;
//	newNode->right=NULL;
//	return newNode;
//}
// 
//int main(){
//	
//}


#include<bits/stdc++.h>

using namespace std;

int dem;

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

void spiral_order(Node *root){
	stack<Node*> s1;
	stack<Node*> s2;
	s1.push(root);
	//cout << root->val << " ";
	while(!s1.empty() || !s2.empty()){
		while(!s1.empty()){
			Node *tmp=s1.top();
			s1.pop();
			cout << tmp->val << " ";
			if(tmp->right!=NULL){
				s2.push(tmp->right);
			}
			if(tmp->left!=NULL){
				s2.push(tmp->left);
			}
		}
		while(!s2.empty()){
			Node *tmp=s2.top();
			s2.pop();
			cout << tmp->val << " ";
			if(tmp->left!=NULL){
				s1.push(tmp->left);
			}
			if(tmp->right!=NULL){
				s1.push(tmp->right);
			}
		}
	}
}

int dem_not_la(Node *root){
	if(root!=NULL){
		if(root->left==NULL && root->right==NULL) dem++;
		else{
			dem_not_la(root->left);
			dem_not_la(root->right);
		}
		return dem;	
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
	dem=0;
	cout << dem_not_la(root) << endl;
}
