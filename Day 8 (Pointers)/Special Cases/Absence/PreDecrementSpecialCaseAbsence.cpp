// The special case from post increment and decrement does not hold in case of pre increment and decrement
// due to how they work 

#include<iostream>
using namespace std;

int main(){
    int a = 10;

    // This will not cause an infinite loop
    while(a >= 1){
        a = --a;
        cout << a << '\t';
    }

    return 0;
}