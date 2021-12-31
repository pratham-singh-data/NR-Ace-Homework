#include<iostream>
using namespace std;

// print res * 100 if positive 
// print res + 60 if res is negative and less than -100
// else print res * 2
// here res = a - b where a and b are input numbers

int main(){
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int res = a - b;

    if(res > 0){
        cout << res * 100;
    }
    else if(res < -100){
        cout << res + 60;
    }
    else{
        cout << res * 2;
    }

    return 0;
}