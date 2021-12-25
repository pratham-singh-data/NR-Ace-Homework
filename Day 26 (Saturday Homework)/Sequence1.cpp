#include<iostream>
using namespace std;

double sum(int n, double curr = 0){
    if(curr == n){
        return (curr) / (curr + 1);
    }

    return (curr) / (curr + 1) + sum(n, curr + 1);
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "The sum is: " << sum(n);
    return 0;
}