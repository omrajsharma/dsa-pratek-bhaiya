#include <string>
#include <iostream>
using namespace std;

// NODE
template<typename T>
class Node{
public:
    string key;
    T value;
    Node* next;

    Node(string key, T value){
        this->key = key;
        this->value = value;
        next = NULL;
    }

    // recusive deletion of linkedlist
    ~Node(){
        if(next != NULL ){
            delete next;
        }
    }
};

// ### HASHTABLE ###
template<typename T>
class Hashtable{
    Node<T> ** table;
    int cs;     // total enteries that have been inserted
    int ts;     // size of table

// HASHING FUNCTION
    int hashfn(string key){
        int idx = 0;
        int pow = 1;

        for(auto ch : key){
            idx = (idx + ch*pow)%ts;
            pow = (pow*29)%ts;      // this uniformaly distribute across hash table
        }

        return idx;
    }

// REHASH 
    void rehash(){
        // saving the ptr to the oldTable and we will do insertion in the new table
        cs = 0;
        Node<T> ** oldTable = table;
        int oldTs = ts;
        
        // increase table size
        ts = 2*ts + 1;
        table = new Node<T>*[ts];      // you should make it prime ? prateek bhaiya

        // initilisation of new table
        for(int i=0; i<ts; i++){
            table[i] = NULL;
        }

        // copy from old table to new table
        for(int i=0; i<oldTs; i++){

            Node<T> * temp = oldTable[i];

            while (temp!=NULL)
            {
                string key = temp->key;
                T val = temp->value;
                // for new table
                insert(key, val);
                temp = temp->next;
            }
            
            // destroy ith linked list
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }            
        }

        delete [] oldTable;
        
    }

public:
// CONSTRUCTOR
    Hashtable(int default_size = 7){
        cs = 0;
        ts = default_size;

        table = new Node<T>*[ts];

        for(int i=0; i<ts; i++){
            table[i] = NULL;
        }
    }

// INSERTION - O(1) TC
    void insert(string key, T val){
        int idx = hashfn(key);

        Node<T>* n = new Node<T>(key,val);

        // insert at the head of linked list
        n->next = table[idx];
        table[idx] = n;

        cs++;

        // REHASHING - O(N) TC  
        // after the load factor exceeds, table doubles the size and recreate the table
        float load_factor = cs/float(ts);
        if(load_factor > 0.7){
            rehash();
        }
    }

// SEARCH
    T* search(string key){
        int idx = hashfn(key);

        Node<T> * temp = table[idx];

        while(temp != NULL){
            if(temp->key == key){
                return &temp->value;    // we send the address so that if search not found then we can send null to
            }
            temp = temp->next;
        }

        return NULL;
    }

// ERASE - !!! Complete this !!!
    void erase(string key){
        for(int i=0; i<ts; i++){
            Node<T> * temp = table[i];

            while(temp != NULL){
                if(temp->value == key){
                    
                }
                temp = temp->next;
            }
        }
    }

// OPERATOR OVER LOAD
T& operator[](string key){
    T* valueFound = search(key);
    if(valueFound==NULL){
        T object;
        insert(key,object);
        valueFound = search(key);
    }

    return *valueFound;
}
    

// PRINT
    void print(){
        for(int i=0; i<ts; i++){
            cout << "Bucket " << i << "->";
            
            Node<T> * temp = table[i];

            while(temp!=NULL){
                cout << temp->key << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    
    
};