#include<iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;

    int x = c; // x holds the ASCII value of character in c
    float y = c ;
    // y is same as x as if fractional value is 00000000000 in C++, it only rturns the non-fractional number part
    float z = y + 0.01;
    // now we get a fractional value due to addition with 0.01
    cout << c << endl << x << endl << y << endl << z << endl;

    return 0;
}