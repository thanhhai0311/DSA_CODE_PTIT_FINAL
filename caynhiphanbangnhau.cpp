//#include<bits/stdc++.h>
//
//using namespace std;
//
//struct Node{
//	int val;
//	Node *left;
//	Node *right;
//	Node(int x){
//		val=x;
//		left=right=NULL;
//	}
//};
//
//void makeRoot(Node *root, int u, int v, char c){
//	if(c=='L') root->left=new Node(v);
//	else root->right=new Node(v);
//}
//
//void insertNode(Node *root, int u, int v, char c){
//	if(root==NULL) return;
//	if(root->val==u){
//		makeRoot(root, u, v, c);
//	}
//	else{
//		insertNode(root->left, u, v, c);
//		insertNode(root->right, u, v, c);
//	}
//}
//
//int ok=1;
//set<int> se;
//
//void check(Node *root1, Node *root2, int dem){
//	if(root1->val!=root2->val) ok=0;
//	else if(root1->left==NULL && root1->right==NULL && root2->left==NULL && root2->right==NULL){
//		se.insert(dem);	
//	}
//	else{
//		check(root1->left, root2->left, dem+1);
//		check(root1->right, root2->right, dem+1);
//	}
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		Node *root1=NULL;
//		int n;
//		cin >> n;
//		for(int i=0; i<n; i++){
//			int u, v;
//			char c;
//			cin >> u >> v >> c;
//			if(root1==NULL){
//				root1=new Node(u);
//				makeRoot(root1, u, v, c);
//			}
//			else{
//				insertNode(root1, u, v, c);
//			}
//		}
//		Node *root2=NULL;
//		int m;
//		cin >> m;
//		for(int i=0; i<m; i++){
//			int u, v;
//			char c;
//			cin >> u >> v >> c;
//			if(root2==NULL){
//				root2=new Node(u);
//				makeRoot(root2, u, v, c);
//			}
//			else{
//				insertNode(root2, u, v, c);
//			}
//		}
//		ok=1;
//		se.clear();
//		check(root1, root2, 0);
//		cout << ok << endl;
//	}
//}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int n; 
		cin >> n;
		cin.ignore();
		string s1; 
		getline(cin, s1);
		int m; 
		cin >> m;
		cin.ignore();
		string s2; 
		getline(cin, s2);
		if(s1!=s2) cout << 0 << endl;
		else cout << 1 << endl;
	}
}
