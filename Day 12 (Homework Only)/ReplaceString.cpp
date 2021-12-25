// We need to replace each charachter in s with 1 based numbering in the alphabetic sequence

#include<iostream>
using namespace std;

string replace(string s){
    string output = "";

    for(int i = 0; i < s.length(); i++){
        output.append(to_string(s[i] - 'a' + 1));
    }

    return output;
}

int main(){
    string s;
    cout << "Enter string to operate on (lowercase only): ";
    cin >> s;

    cout << "Output : " << replace(s) << '\n';
    return 0;
}