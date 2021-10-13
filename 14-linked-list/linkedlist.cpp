#include <iostream>
#include "list.h"
using namespace std;

void printList(Node* head){
    while(head!=NULL){
        cout << head->getData() << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    List l;
    l.push_front(5);
    l.push_front(4);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);

    Node * head = l.begin();

    // Printing origial list
    cout << "Original!" << endl;
    printList(l.head);

    // printing after insertion
    l.insert(9,2);
    cout << "printing after insertion" << endl;
    printList(head);

    // Searching
    // int dataFind = 5;
    // cout << l.search(dataFind) << endl;
    // cout << l.searchRecur(l.head, dataFind) << endl;
    // cout << l.recursiveSearch(5) << endl;

    // deleting - deleting node
    cout << "deleting first node with value 9" << endl;
    l.deleteNode(9);
    printList(head);
    


    // pop front - ############ getting error here #######################
    cout << "printing pop front list" << endl;
    l.pop_front();
    printList(l.head);

    // pop back
    cout << "print pop back list" << endl;
    l.pop_back();
    printList(l.head);
    



    // deleting list automatically takes place
    cout << "##### Destructing node and list #####" << endl;
    return 0;
}