#include<iostream>
using namespace std;

int main(){
    int a= 20;
    int b = 30;
    int* c = &a;
    int* d = &b;

    cout << (*c)*b << " " << *(d) + *(c) << " " << **(&c) + *(&b) << "\n";
    // result: 600 50 50
    return 0;
}