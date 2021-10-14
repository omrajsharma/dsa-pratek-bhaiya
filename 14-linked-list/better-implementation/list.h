class Node{
    int data;
    Node* next;

public:
    Node():data(NULL),next(NULL);
    Node(int d):data(d),next(NULL);

    int getData(){
        return data;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List()
};