#include<bits/stdc++.h>

using namespace std;

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} *Tree;

void init(Tree* T){
    *T = NULL;
}

Tree GetNode(){
    Tree p;
    p = new node;
    return p;
}

void FreeNode(Tree p){
    delete(p);
}

int isEmpty(Tree T){
    if(T == NULL) return 1;
    return 0;
}

Tree MakeNode(int newdata){
    Tree p;
    p = GetNode();
    p->data = newdata;
    p->left = NULL;
    p->right = NULL;
    return p;
}

Tree Search(Tree T, int x){
    node* p;
    if(T == NULL) return NULL;
    if(T->data == x) return T;
    p = Search(T->left, x);
    if(p == NULL) p = Search(T->right, x);
    return p;
}

Tree MakeRoot(int newdata){
    Tree p;
    p = MakeNode(newdata);
    return p;
}

void AddLeft(Tree T, int x, int y){
    Tree p, q;
    p = Search(T, x);
    if(p == NULL){
        cout << "KHONG TIM THAY NODE X DE THEM";
        return;
    }
    else if(p->left != NULL){
        cout << "NODE X DA CO NHANH CAY CON TRAI";
        return;
    }
    else{
        q = MakeNode(y);
        p->left = q;
    }
}

void AddRight(Tree T, int x, int y){
    Tree p, q;
    p = Search(T, x);
    if(p == NULL){
        cout << "KHONG TIM THAY NODE X DE THEM";
        return;
    }
    else if(p->right != NULL){
        cout << "NODE X DA CO NHANH CAY CON PHAI";
        return;
    }
    else{
        q = MakeNode(y);
        p->right = q;
    }
}

void RemoveLeft(Tree T, int x){
    Tree p, q;
    p = Search(T, x);
    if(p == NULL){
        cout << "KHONG TIM THAY NODE BEN TRAI DE XOA";
        return;
    }
    else if(p->left->right != NULL || p->left->left != NULL){
        cout << "NODE CHA X CO NHANH CAY CON TRAI";
        return;
    }
    else{
        q = p->left;
        p->left = NULL;
        delete(q);
    }
}

void preOrder(Tree T){
    if(T != NULL){
        cout << T->data << " ";
        preOrder(T->left);
        preOrder(T->right);
    }
}

void inOrder(Tree T){
    if(T != NULL){
        inOrder(T->left);
        cout << T->data << " ";
        inOrder(T->right);
    }
}

void postOrder(Tree T){
    if(T != NULL){
        postOrder(T->left);
        postOrder(T->right);
        cout << T->data << " ";
    }
}

int main(){
    Tree T;
    init(&T);
    T = MakeRoot(1);
    AddLeft(T, 1, 2);
    AddRight(T, 1, 3);
    AddLeft(T->left, 2, 4);
    AddRight(T->left, 2, 5);
    AddLeft(T->right, 3, 6);
    AddRight(T->right, 3, 7);
    cout << "Preorder: ";
    preOrder(T);
    cout << endl;
    cout << "Inorder: ";
    inOrder(T);
    cout << endl;
    cout << "Postorder: ";
    postOrder(T);
    cout << endl;
    RemoveLeft(T, 2);
    cout << "After removing left node of 2:" << endl;
    cout << "Preorder: ";
    preOrder(T);
    cout << endl;
    cout << "Inorder: ";
    inOrder(T);
    cout << endl;
    cout << "Postorder: ";
    postOrder(T);
    cout << endl;
    return 0;
}
