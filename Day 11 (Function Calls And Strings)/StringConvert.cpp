#include<iostream>
using namespace std;

string convert(string inp){
    string output = "";

    for(int i = 0; i < inp.length(); i++){
        if(inp[i] == 'a') 
            output.push_back('a');

        if (inp[i] == 'b')
            output.append("bb");

        if (inp[i] == 'c')
            output.append("ccc");
    }

    return output;
}

int main(){
    string inp;
    cout << "Enter string to convert: ";
    cin >> inp;

    cout << convert(inp) << '\n';
    return 0;
}