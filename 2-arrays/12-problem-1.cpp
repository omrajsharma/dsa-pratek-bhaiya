// Implement a function that takes array of intergers as input and returns the largest element

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int check(vector<int> arr){
    int lg = INT_MIN;
    for(int i=0; i<arr.size(); i++ )
        if(arr[i]>lg)
            lg = arr[i];

    return lg;
}

int main(){
    vector<int> arr {5,3,5,7,2,4,6,2,7,6,8};

    int largestNum = check(arr);

    cout << "Largest element is : " << largestNum;

    return 0;
}