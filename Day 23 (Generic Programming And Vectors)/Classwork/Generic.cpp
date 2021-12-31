#include<iostream>
using namespace std;

template<typename T>
T sum(T a, T b){
    return a + b;
}

int main(){
    cout << sum(2, 3) << endl;
    cout << sum(2.2, 3.3) << endl;

    // for string make sure to use variables, else they will be considered constant char arrays and error will be 
    // thrown
    string a = "Hello";
    string b = "World";
    cout << sum(a, b) << endl;
    return 0;
}