#include<iostream>
using namespace std;

int z = 9999;

int test(){
    cout << z << '\n';
    int z = 40;
    cout << z << '\n';
    cout << ::z << '\n';
}

int main(){
    test();
    return 0;
}