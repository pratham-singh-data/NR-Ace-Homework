// Write a recurrsive code that for a particulat n prints:
// 1 => 1
// 2 => 22 1
// 3 => 333 22 1
// 4 => 4444 333 22 1
#include<iostream>
using namespace std;

void say(int n){
    if(n == 0){
        return;
    }

    for(int i = 0; i < n; i++){
        cout << n;
    }

    cout << ' ';

    say(n - 1);
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    say(n);
    return 0;
}