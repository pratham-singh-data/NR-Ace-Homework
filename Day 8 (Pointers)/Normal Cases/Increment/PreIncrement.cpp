// Here value is incremented before it is used

#include<iostream>
using namespace std;

int main(){
    int a = 1;

    while(a <= 10){
        cout << ++a << '\t';
    }

    return 0;
}