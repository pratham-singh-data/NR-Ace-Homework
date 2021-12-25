#include<iostream>
using namespace std;

int returned(int val){
    int sum = 0;

    for(int i = 1; i <= val; i++){
        sum += i * i * i * i;
    }

    return sum;
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter result is : " << returned(n) << '\n';
    return 0;
}