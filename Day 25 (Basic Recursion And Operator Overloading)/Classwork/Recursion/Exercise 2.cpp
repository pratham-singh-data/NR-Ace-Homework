// Write a recurrsive code that for a particulat n prints:
// 1 => 1
// 2 => 1 22
// 3 => 1 22 333
// 4 => 1 22 333 4444
#include<iostream>
using namespace std;

void say(int n, int curr = 1){
    if(curr > n){
        return;
    }

    for(int i = 0; i < curr; i++){
        cout << curr;
    }

    cout << ' ';

    say(n, curr + 1);
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    say(n);
    return 0;
}