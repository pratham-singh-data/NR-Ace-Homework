#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* address = &a;
    cout << address << " " << &a << '\n';
    cout << *address << " " << *(&a) << "\n";
    cout << &address << " " << *(*(&address));

    return 0;
}