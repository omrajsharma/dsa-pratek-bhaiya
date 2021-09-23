// another way of linear search
/*
Other methods
search
binary_search
for_each
lower_bound
upper_bound
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {10,11,2,3,4,5,23};

    int key;
    cin >> key;

    vector<int>::iterator it = find(arr.begin(), arr.end(), key);

    if(it!=arr.end())
        cout << "Present at index " << it-arr.begin() << endl;
    else 
        cout << "Element not found" << endl;


    return 0;
}