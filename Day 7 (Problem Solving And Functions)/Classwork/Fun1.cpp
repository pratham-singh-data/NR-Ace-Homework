#include<iostream>
using namespace std;

// input : int, int, float
// result: float
// calculatio: a + b * c;

float val(int a, int b, float c){
    return a + b * c;
}

int main(){
    int a, b;
    float c;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter floating value: ";
    cin >> c;

    cout << val(a, b, c);
}