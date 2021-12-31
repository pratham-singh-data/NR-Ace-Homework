// n = 4
// *
// **
// ***
// ****

#include<iostream>
using namespace std;

void pattern(int n, int curr = 1){
    if(curr > n) return;

    for(int i = 0; i < curr; i++){
        cout << '*';
    }

    cout << '\n';
    pattern(n, curr + 1);
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    pattern(n);
    return 0;
}