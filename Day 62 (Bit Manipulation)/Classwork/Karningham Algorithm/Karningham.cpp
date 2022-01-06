#include<iostream>
using namespace std;

int count(int x){
    int count = 0;

    while(x != 0){
        count++;
        x = x & ~(~x + 1);
    }

    return count;
}

int main(){
    int x;
    cout << "X = ";
    cin >> x;

    cout << "Ones = " << count(x) << '\n';
    return 0;
}