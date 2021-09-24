#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};

    vector<int>::iterator it;

    // arr.begin() and end() returns an iterator pointing to the first ad last element in the vector
    for(it = arr.begin(); it < arr.end(); it++)
        cout << ' ' << *it << endl;


    return 0;
}