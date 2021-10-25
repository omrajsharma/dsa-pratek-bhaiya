/*
TRIE (prefix tree)
Important Data Structure for pattern matching problems
- Ganeric tree like data structure
- efficient information retrieval data structure
- searches in optimal time O(key length) but uses extra storage

Important operation
- Insetion O(key length)
- Search O(key length)
- Deletion (rare)
*/

#include <iostream>
#include "trie.h"
using namespace std;

int main(){
    string word[] {"hello", "he", "apple", "aple", "news"};
    
    Trie t;

    // insertion - O(N*L) number of words
    for(auto w : word){
        t.insert(w);
    }

    // searching - O(L) length of word
    string key;
    cin >> key;
    cout << t.search(key) << endl;

    return 0;
}