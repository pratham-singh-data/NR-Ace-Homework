#include<iostream>
using namespace std;

int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    int b = 15;

    swap(a, b);
    cout << a << " " << b << '\n';
    return 0;

    // Call by value; so 10 15; no swap
}