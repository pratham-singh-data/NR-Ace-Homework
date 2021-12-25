// A string s is given , you have to generate an output such that from the pairs of adjacent,
// lexicographically smallest charachter will be removed. If a charachter is unpaired, returned it as it is.

#include <iostream>
using namespace std;

char max(char a, char b){
    if (a > b) return a;
    return b;
}

string process(string s){
    string output = "";

    for(int i = 0; i < s.length(); i+= 2){
        output.push_back(max(s[i], s[i + 1]));
        // at the end of string, we have \0 which has value ; lower than all charachters
    }

    return output;
}

int main(){
    string s;
    cout << "Enter string to operate on: ";
    cin >> s;

    cout << "Output : " << process(s) << '\n';
    return 0;
}