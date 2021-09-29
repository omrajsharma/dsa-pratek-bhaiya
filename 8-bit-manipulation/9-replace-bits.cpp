// You are given two 32 bit numbers, N and M and two bit positions i and j. write a method to set all bits between i and j in N equal to M. M (become a substring of N locationed at and starting at j)
// Example:
// N = 10000000000
// M = 10101
// i = 2, j = 6
// output : 1001010100

#include <iostream>
using namespace std;

int main(){
    int N = 15;
    int M = 2;

    int i = 1;
    int j = 3;

    int a = (-1<<(j+1));
    int b = ((1<<i)-1);
    int mask = a|b;

    int result = N & mask;      // clear the range
    result = ((M<<i)|result);   // setting the value

    cout << result << endl;
    

    return 0;
}