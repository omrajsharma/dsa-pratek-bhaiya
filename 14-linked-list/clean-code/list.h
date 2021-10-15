#include <iostream>
#include <stdio.h>
using namespace std;

// forward declaration
class List;

class Node{
    int data;

public:
    Node* next;

    // Node():data(NULL),next(NULL){};
    Node(int d):data(d),next(NULL){};

    int getData(){
        return data;
    }

    friend class List;

    ~Node(){
        if(next != NULL){
            delete next;
        }
        cout << "Deleted " << data << endl;
    }
};

class List{
    Node* tail;
    Node* head;

public:
    // 
    List():head(NULL), tail(NULL){};

    // PRINT
    void print(){
        Node* pt = head;
        while(pt != NULL){
            cout << pt->data << "->";
            pt = pt->next;
        }
        cout << "NULL" << endl;
    }

    // PUSH FRONT
    void pushFront(int d){
        if(head==NULL){
            Node* n = new Node(d);
            head = tail = n;
        } else {
            Node* n = new Node(d);
            n->next = head;
            head = n;
        }
        cout << "Added " << d << " at front" << endl;
    }

    // VOID PUSHBACK
    void pushBack(int d){
        if(head==NULL){
            Node* n = new Node(d);
            tail = head = n;
        } else {
            Node* n = new Node(d);
            tail->next = n;
            tail = n;
        }
        cout << "Added " << d << " at back" << endl;
    }

    // INSERT
    void insert(int val, int pos){
        if(pos==0){
            // equivalent to pushFront() operation
            Node* n = new Node(val);
            n->next = head;
            head = n;
            return;
        } else {
            Node* temp = head;
            while(pos-->1){
                temp = temp->next;
            }
            Node* n = new Node(val);
            n->next = temp->next;
            temp->next = n;
        }
        cout << "Inserted " << val << endl;
    }

    // SEARCHING 
    int search(int key){
        Node* pt = head;
        int pos = 0;
        while(pt != NULL){
            if(pt->data == key){
                return pos;
            }
            pt = pt->next;
            pos++;
        }
        return -1;
    }

    // POP FRONT
    void popFront(){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        cout << "Pop front function called " << endl;
    }

    // POP BACK
    void popBack(){
        if(head==NULL){
            cout << "Operation can't be done as there is 0 nodes present!!" << endl;
        } else {
            Node* prev = head;
            Node* curr = prev->next;

            while(curr->next != NULL){
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;

            cout << "Pop back function called " << endl;
        }
    }

    // DELETE NODE
    void deleteNode(int pos){
        if(pos==0){
            popFront();
        } else {
            Node* prev = head;
            Node* curr = prev->next;
            while(pos-->1){
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }

    // REVERSING LIST
    void reverseList(){
        Node* prev = NULL;
        Node* curr = head;
        Node* nxt = head->next;

        while(nxt != NULL){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        curr->next = prev;
        head = curr;
        cout << "List reversed " << endl;
    }

    // DESTRUCTOR
    ~List() {
        if(head != NULL){
            delete head;
        }
        cout << "List deleted" << endl;
    }


};