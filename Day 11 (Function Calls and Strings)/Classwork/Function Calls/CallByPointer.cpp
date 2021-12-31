#include <iostream>
using namespace std;

void callByPointer(int* a, int* b){
    *a = 3;
    *b = 4;
    cout << "Inside Function: " << *a << '\t' << *b << '\n';
}

int main(){
    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "Prior Call: " << a << '\t' << b << '\n';

    callByPointer(&a, &b);

    cout << "Post Call: " << a << '\t' << b << '\n';
}