// IMPORTANT QUESTION

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string a, string b){
    if(a.length() == b.length()){
        return a<b;     // lexicographic order
    }
    return a.length() < b.length();
}

void findSubsets(char *input, char *output, int i, int j, vector<string> &v){
    // base case
    if(input[i]=='\0'){
        output[j] = '\0';
        string temp(output);
        v.push_back(temp);
        return ;
    }

    // rec case
    // Include ith letter
    output[j] = input[i];
    findSubsets(input, output, i+1, j+1, v);
    // Excluding ith letter
    findSubsets(input, output, i+1, j, v);
}

int main(){
    char input[100];
    char output[100];
    vector<string> v;

    cin >> input;

    findSubsets(input, output, 0, 0, v);
    sort(v.begin(), v.end(), comp);


    for(auto s : v){
        cout << s << endl;
    }

    return 0;
}