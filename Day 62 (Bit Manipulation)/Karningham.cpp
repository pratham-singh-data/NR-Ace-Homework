#include<iostream>
using namespace std;

int getOnes(int x){
    int count = 0;

    while(x != 0){
        count++;
        x = x & ~(~x + 1);
    }

    return count;
}

int main(){
    int x;
    cout << "x = ";
    cin >> x;

    cout << "Ones = " << getOnes(x) << '\n';
    return 0;
}