#include<iostream>
using namespace std;

int fun(){
    int a = 90;
    cout << a << ' ';
}

int main(){
    for(int i = 0; i < 5; i++){
        fun();
    }

    return 0;
}

// Output: 90 90 90 90 90