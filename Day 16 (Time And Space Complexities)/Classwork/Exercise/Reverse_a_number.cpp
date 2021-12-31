#include<iostream>
using namespace std;

int reverse(int inp){
    int res = 0;
    bool neg = false;

    if(inp < 0){
        neg = true;
        inp *= -1;
    }

    while(inp > 0){
        res = res * 10 + inp % 10;
        inp /= 10; 
    }

    if(neg){
        res *= -1;
    }

    return res;
}

int main(){
    int inp;
    cout << "Enter input numeral: ";
    cin >> inp;

    cout << "Reverse: " << reverse(inp);
}