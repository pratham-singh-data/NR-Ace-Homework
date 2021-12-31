#include<iostream>
using namespace std;

void print(int curr, int n){
    if(curr == n + 1){
        return;
    }

    cout << curr << '\t';
    print(curr + 1, n);
}

int main(){
    int n;
    cout << "Enter number till which values are to be printed: ";
    cin >> n;

    print(0, n);
    return 0;
}