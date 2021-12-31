#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* p = &a;
    float c = 9.353;
    float* q = &c;

    void* z = &a;

    cout << z << " " << &a << "  " << &c << "\n";
    cout << *p << " " << *p << "\n";
    cout << *((int*)z) << "\n";
    cout << *((float*)z) << "\n";
    cout << *((char*)z) << "\n";
}