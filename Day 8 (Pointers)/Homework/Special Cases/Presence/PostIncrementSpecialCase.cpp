// Due to how post increment works, in case of assignement of result to the variable itself, 
// no change occurs

#include<iostream>
using namespace std;

int main(){
    int a = 1;

    // This will cause an infinite loop
    while(a <= 10){
        a = a++;
        cout << a << '\t';
    }

    return 0;
}