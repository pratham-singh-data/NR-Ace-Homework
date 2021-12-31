#include <iostream>
using namespace std;

int pow(int a, int b){
    // this takes O(n) time.
    int res = 1;

    for(int i = 1; i <= b; i++){
        res *= a;
    }

    return res;
}

int main(){
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    cout << pow(a, b);
    return 0;
}