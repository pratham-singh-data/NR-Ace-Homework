#include<iostream>
using namespace std;

int main(){
    cout << ('a' + 'A' - 'C' + 'd') << endl;
    cout << (-'a' + 'A' - 'C' + 'd') << endl;
    cout << (char)('a' - 'A' + 'C') << endl;
    return 0;
}