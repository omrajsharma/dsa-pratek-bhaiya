#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1;
    vector<int> vec2 {1,2,3,4,5};
    vector<int> arr(10,7);          // 10 elements with value 7 - fill contructor initiailsation

    // Size of vector
    cout << vec1.size() << endl;
    cout << vec2.size() << endl;

    vec2.push_back(6);

    // Capacity
    cout << vec1.capacity() << endl;
    cout << vec2.capacity() << endl;

    // Print all elements in array
    for(int i=0; i<vec2.size(); i++)
        cout << vec2[i] << endl;

    // Pop Back
    vec2.pop_back();
    
    return 0;
}