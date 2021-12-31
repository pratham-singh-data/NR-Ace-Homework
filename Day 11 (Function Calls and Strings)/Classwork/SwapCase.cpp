// Change a string such that it accepts a string and returns the string with lowercase turned to 
// uppercase and uppercase to lowercase 

#include<iostream>
using namespace std;

string convert(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            // curently lowercase
            s[i] = s[i] - 'a' + 'A';
            continue; 
            // in the absence of this statement ]; the following code will convert uppercase back to lowercase
        }
        
        if(s[i] >= 'A' && s[i] <= 'Z'){
            // currently uppercase
            s[i] = s[i] - 'A' + 'a';
        }
        // leave non alphabets as is.
    }

    return s;
}

int main(){
    string s = "rAveEt@726ab8Cd";
    cout << s << '\n';
    cout << convert(s) << "\n";
    return 0;
}