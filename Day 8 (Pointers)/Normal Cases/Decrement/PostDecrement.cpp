// Here value is decremented after it is used

#include<iostream>
using namespace std;

int main(){
    int a = 10;

    while(a >= 1){
        cout << a-- << '\t';
    }

    return 0;
}