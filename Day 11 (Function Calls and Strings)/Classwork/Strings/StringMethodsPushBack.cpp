#include <iostream>
using namespace std;

int main(){
    string s = "Hello World";
    cout << s << '\n';
    s.push_back('A');
    cout << s << '\n';
    s.push_back('X');
    cout << s << '\n';
    return 0;
}