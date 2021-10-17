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
OUTPUT : 4 7 5 2 6 3 1 

### LEVEL ORDER ###
LEVEL BY LEVEL PRITING
INPUT : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 
OUTPUT : 
1 
2 3 
4 5 6 
7 

### LEVEL ORDER BUILD ###
INPUT LEVEL BY LEVEL
INPUT : 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1 
BUILDS TREE IN LEVEL ORDER


*/

#include <iostream>
#include <queue>
using namespace std;


// ----------------------------------------------------------------------
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

// LEVEL ORDER BUILD
Node* levelOrderBuild(){
    int d;
    cin >> d;

    Node* root = new Node(d);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;

        if(c1 != -1){
            current->left = new Node(c1);
            q.push(current->left);
        }
        if(c2 != -1){
            current->right = new Node(c2);
            q.push(current->right);
        }
    }

    return root;
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

// LEVEL ORDER
void printLevelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        if(temp==NULL){
            cout << endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else {
            q.pop();
            cout << temp->data << " ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return;
}


// HEIGHT 
int height(Node * root){
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);

    return 1+ max(h1, h2);
}

// DIAMETER
// time complex - O(n2) because we are going to each node more than one time
int diameter(Node* root){
    // base case
    if(root == NULL){
        return 0;
    }

    // rec case
    int d1 = height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);

    return max(d1, max(d2,d3));
}

// DIAMETER - OPT
// time complex - O(n)
class HDPair{
    public:
    int height;
    int diameter;
};

HDPair optDiameter(Node* root){
    HDPair p;

    if(root==NULL){
        p.height = p.diameter = 0;
        return p;
    }

    HDPair Left = optDiameter(root->left);
    HDPair Right = optDiameter(root->right);

    p.height = max(Left.height, Right.height) + 1;

    int D1 = Left.height + Right.height;
    int D2 = Left.diameter;
    int D3 = Right.diameter;

    p.diameter = max(D1, max(D2,D3));
    return p;
}

// ---------------------------------------------------------------------
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

    // level order
    cout << "LevelOrder : " << endl;
    printLevelorder(root);
    cout << endl;

    cout << "Max height : " << height(root) << endl; 
    cout << "Diameter : " << diameter(root) << endl;
    cout << "Optimised diameter : " << optDiameter(root).diameter << endl;

    // level order build
    // cout << "Input for level order build " << endl;
    // root = levelOrderBuild();
    // printLevelorder(root);



    return 0;
}