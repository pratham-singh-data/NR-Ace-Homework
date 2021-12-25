// Due to how post decrement works, in case of assignement of result to the variable itself, 
// no change occurs

#include<iostream>
using namespace std;

int main(){
    int a = 10;

    // This will cause an infinite loop
    while(a >= 1){
        a = a--;
        cout << a << '\t';
    }

    return 0;
}