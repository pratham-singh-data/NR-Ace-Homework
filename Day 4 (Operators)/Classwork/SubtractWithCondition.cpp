#include<iostream>
using namespace std;

// print res * 100 if positive and 0 if res is negative
// here res = a - b ehere a and b are input numbers

int main(){
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int res = a - b;

    if(res > 0){
        cout << res * 100;
    }
    else if(res < 0){
        cout << 0;
    }
    else{
        cout << INT_MIN;
    }

    return 0;
}