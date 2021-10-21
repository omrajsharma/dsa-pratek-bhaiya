#include <iostream>
#include <array>

using namespace std;

int main() {
    // Integer array
    int arr01[] {1,2,3};
    int arr02[] = {1,2,3};
    int arr03[10] = {1,2,3,4,5};
    array<int, 5> arr04;
    array<int, 5> arr05 {1,2,3};
    array<int, 5> arr06 = {1,2,3,4,5};

    // <CONCEPT OF INDEXING> i.e. forward & backward indexing

    // Accessing array
    cout << arr05[0] << endl;

    // Updating array
    arr01[0] = 10;
    cout << arr01[0] << endl;

    return 0;
}