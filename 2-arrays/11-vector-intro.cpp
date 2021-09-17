#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};

    // pop back
    arr.pop_back();

    // push_back
    arr.push_back(6);

    // size of vector
    cout << arr.size() << endl;

    // capacity of vector
    cout << arr.capacity() << endl;

    // printing all elements
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << endl;
    }

    return 0;
}