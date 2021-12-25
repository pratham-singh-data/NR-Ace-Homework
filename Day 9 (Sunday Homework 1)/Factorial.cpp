#include<iostream>
using namespace std;

long long int fact(long long int val){
    if(val <= 1)
        return 1;
    
    return val * fact(val - 1);
}

int main(){
    long long int n;
    cout << "Enter value of whose factorial is to be found: ";
    cin >> n;

    cout << "Factorial of " << n << " is: " << fact(n) << '\n';
    return 0;
}