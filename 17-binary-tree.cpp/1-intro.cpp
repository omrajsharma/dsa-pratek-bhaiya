/*
TRAVERSAL

### PRE ORDER ###
ROOT, LEFT, RIGHT
INPUT : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 
OUTPUT : 1 2 4 5 7 3 6

### IN ORDER ###
LEFT, ROOT, RIGHT
INPUT: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 
OUTPUT: 4 2 7 5 1 3 6 

### POST ORDER ###
LEFT, RIGHT, ROOT
INPUT : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 
OUTPUT : 
*/

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * left;
    Node * right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

// functional approach
// Preorder build of the tree root, left, right tree
Node* buildTree(){
    int d;
    cin >> d;

    if(d==-1)   return NULL;

    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

// PRINT PREORDER
void printPreorder(Node *root){
    if(root == NULL){
        return;
    }
    cout << root->data << " " ;
    printPreorder(root->left);
    printPreorder(root->right);
}

// PRINT INORDER
void printInorder(Node* root){
    if(root==NULL){
        return; 
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

// POST ORDER - IMPORTANT (BOTTOM->UP)
void printPostorder(Node* root){
    if(root==NULL)      return;

    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}


int main(){
    Node * root = buildTree();

    // print preorder
    cout << "PreOrder : ";
    printPreorder(root);
    cout << endl;

    // print inorder
    cout << "InOrder : ";
    printInorder(root);
    cout << endl;

    // print post order
    cout << "PostOrder : ";
    printPostorder(root);
    cout << endl;



    return 0;
}