#include<iostream>
using namespace std;

int main(){
    float a, b;

    cout << "Enter two floating point numbers: ";
    cin >> a >> b;

    float res = a * b;
    // result of float mltiplication is float
    // if we make res int then fractional part is truncated.
    cout << "Floating :" << res << endl << "Integer :" << int(res);

    return 0;
}