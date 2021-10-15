// Implementation using linked list
using namespace std;

template<typename T>
class Stack;

template<typename T>
class Node{
public:
    T data;
    Node<T>* next;

    Node(T d){
        data = d;
    }


    // friend class Stack;      - build without this statement
};

template<typename T>
class Stack{
    Node<T> *head;

public:
    // CONSTRUCTOR
    Stack(){
        head = NULL;
    }

    // IS EMPTY
    bool isEmpty(){
        return (head==NULL? true: false);
    }

    // PUSH
    void push(T data){
        Node<T> *n = new Node<T>(data);
        n->next = head;
        head = n;
    }

    // TOP
    T top(){
        return head->data;
    }

    // POP
    void pop(){
        if(head != NULL){
            Node<T> * temp = head;
            head = head->next;
            delete temp;
        }
    }

    // PRINT
    void print(){
        Node<T>* temp = head;
        while(temp != NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};