#include<iostream>
using namespace std;

void fun2(){
    static int p = 10;
    cout << p << " ";
    p *= 2;
}

void fun(){
    for(int i = 0; i < 2; i++){
        fun2();
    }
}

int main(){
    for(int i = 0; i < 3; i++){
        fun();
    }

    return 0;
}

// Output: 10 20 40 80 160 320