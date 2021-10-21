#include <iostream>
#include "2-hashtable.h"
using namespace std;

int main(){
    Hashtable<int> h;
    h.insert("Mango", 100);
    h.insert("Apple", 120);
    h.insert("Banana", 140);
    h.insert("Orange", 200);
    h.insert("Kiwi", 250);
    h.insert("papaya", 300);
    h.insert("Lichi", 20);
    h.insert("pineapple", 150);
    h.print();

    // search implement
    cout << "Search your fruit : ";
    string fruit;
    cin >> fruit;
    int * price = h.search(fruit);
    if(price!=NULL){
        cout << "Price of " << fruit << " : " << *price << endl;
    }
    else {
        cout << "Fruit not present" << endl;
    }

    // testing operator overloading
    h["NewFruit"] = 500;
    cout << "New fruit cost : " << h["NewFruit"] << endl; 

    return 0;
}