#include<iostream>
using namespace std;

int main(){
    int a;
    char c = 'D';
    void* d = &c;

    cout << &a << " " << &c << " " << d;
    return 0;
}