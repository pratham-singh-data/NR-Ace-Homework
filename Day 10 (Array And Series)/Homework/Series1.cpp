#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    double sum = 0;
    long long int fact = 1;
    for(double i = 1; i <= n; i++){
        fact *= i;
        sum += (i * (i + 2))/(fact + (fact * (i + 1)));
    }

    cout << sum;
    return 0;
}