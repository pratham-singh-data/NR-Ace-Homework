#include<iostream>
using namespace std;

int fun(){
    static int a = 90;
    cout << a << ' ';
    a++;
}

int main(){
    for(int i = 0; i < 5; i++){
        fun();
    }

    return 0;
}

// Output: 90 91 92 93 94