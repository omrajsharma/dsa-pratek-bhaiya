/*
seaching time complexity: [ O(logn) <= h <= n  ]
inorder of bst is increasing order

*/

// -------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int key;
    Node* left;
    Node* right;

    Node(int key){
        this->key = key;
        left = right = NULL;
    }
};

// INSERTION IN BST
Node* insert(Node* root , int key){
    // base case
    if(root==NULL){
        return new Node(key);
    }

    // recu case
    if(key < root->key){
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }
    return root;
}


// SEARCHING IN BST
bool search(Node* root, int key){
    if(root==NULL){
        return false;
    }

    if(root->key == key){
        return true;
    } else if(key < root->key){
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}


// PRINT INORDER
void printInOrder(Node* root){
    // base case
    if(root==NULL){
        return;
    }

    // recu case
    printInOrder(root->left);
    cout << root->key << " ";
    printInOrder(root->right);
}


// helper function for deletion function
Node* findMin(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}
// DELETION
Node* remove(Node* root, int key){
    if(root==NULL){
        return NULL;
    } 
    else if(key < root->key){
        root->left = remove(root->left, key);
    } 
    else if(key > root->key){
        root->right = remove(root->right, key);
    } 
    else {
        // here the root matches the key
        // case 1 : No children
        if(root->left==NULL and root->right==NULL){
            delete root;
            root = NULL;
        }
        
        // case 2 : single children
        else if(root->left == NULL){
            // right subtree is not NULL
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right ==  NULL){
            // left subtree is not NULL
            Node* temp = root;
            root = root->left;
            delete temp;
        }

        // case 3 : two children
        // deleting the node and replacing the node with the smallest element in the subtree as it come next in the ascending order to maintain the sequence and then deleting that smallest node in the right subtree.
        else {
            Node* temp = findMin(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }

    }
    return root;
}



// print in the range
void printRange(Node* root, int k1, int k2){
    if(root==NULL){
        return;
    }

    if(root->key>=k1 and root->key<=k2){
        printRange(root->left, k1, k2);
        cout << root->key << " ";
        printRange(root->right, k1, k2);
    }
    else if(root->key > k2){
        printRange(root->left,k1,k2);
    }
    else if(root->key < k1){
        printRange(root->right,k1,k2);
    }

}


// root to leaf path
void printPath(Node* root, vector<int> &path){
    if(root ==   NULL){
        return;
    }

    if(root->left == NULL and root->right == NULL){
        // print vector
        for(int node : path){
            cout << node << "->";
        }
        cout << root->key;
        cout << endl;
        return;
    }

    // rec case
    path.push_back(root->key);
    printPath(root->left, path);
    printPath(root->right, path);

    // back track
    path.pop_back();

    return;
}


// -----------------------------------------------------------------

// MAIN
int main(){
    Node* root = NULL;
    int arr[] {8,3,10,1,6,14,4,7,13};

    // insertion
    for(int x : arr){
        root = insert(root, x);
    }

    // searching
    cout << search(root, 5) << endl;

    // print
    printInOrder(root);
    cout << endl;

    // deletion
    root = remove(root, 14);
    printInOrder(root);
    cout << endl;

    // printing in range
    printRange(root, 5, 12);
    cout << endl;

    // print path from root to leaf
    vector<int> path;
    printPath(root, path);

    return 0;
}