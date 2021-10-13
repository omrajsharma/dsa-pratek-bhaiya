#include <iostream>
#include <stdio.h>
using namespace std;

// forward declaration
class List;


// ### NODE ###
class Node {
    int data;
public:
    Node* next;

    // Initialization list
    Node(int d):data(d),next(NULL){}

    int getData(){
        return data;
    }

    // destructing node
    ~Node(){
        if(next!=NULL){
            delete next;
        }
        cout << "Deleting node " << this->data << endl;
    }


    friend class List;
};


// ### LIST ###
class List{
    Node* tail;

    // HELPER - for recursive search
    int helper(Node* start, int key){
        // base case
        if(start==NULL){
            return -1;
        }

        // recursive case
        if(start->data==key){
            return 0;
        }
        int subIdx = helper(start->next, key);
        if(subIdx==-1){
            return -1;
        } 
        return subIdx+1;
    }

public:
    Node* head;
    List():head(NULL),tail(NULL){}

    // HEAD
    Node* begin(){
        return head;
    }

    // PUSH FRONT
    void push_front(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        } else{
            Node * n = new Node(data);
            // (*n).next = head;
            n->next = head;
            head = n;
        }
    }

    // PUSH BACK
    void push_back(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        } else {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
    
    // INSERT
    void insert(int data, int pos){
        if(pos==0){
            push_front(data);
        } else {
            Node* temp = head;
            while(pos-- > 1){
                temp = temp->next;
            }
            Node* n = new Node(data);
            n->next = temp->next;
            temp->next = n;
        }
    }

    // SEARCH
    int search(int data){
        int pos = 0;
        Node * temp = head;
        while(temp != NULL){
            if(temp->data == data){
                return pos;
            }
            temp = temp->next;
            pos++;
        }
        return -1;
    }
    // SEARCH - recursion
    bool searchRecur(Node*head, int key){
        // base case
        if(head==NULL){
            return false;
        }

        // recur case
        if(head->data==key){
            return true;
        } else {
            return searchRecur(head->next, key);
        }
    }

    // RECURSIVE SEARCH
    int recursiveSearch(int key){
        int idx = helper(head, key);
        return idx;
    }

    // POP FRONT
    void pop_front(){
        // Node*temp = head;
        head = head->next;
        // temp->next = NULL;
        // delete temp;
    }

    // POP BACK
    void pop_back(){
        if(head->next == NULL){
            head = NULL;
        }

        Node* tempBack = head;
        Node* temp = head->next;
        while(temp->next != NULL){
            tempBack = temp;
            temp = temp->next;
        }
        tempBack->next = NULL;
    }

    // DELETING NODE
    void deleteNode(int key){
        if(head->data==key){
            head = head->next;
        }

        Node* tempBack = head;
        Node* temp = head->next;
        while(temp->data != key){
            tempBack = temp;
            temp = temp->next;
        }
        tempBack->next = temp->next;
    }

    // DELETING LINKED LIST
    ~List(){
        if(head != NULL ){
            delete head;
        }
        cout << "Deleting head " << endl;
    }


};