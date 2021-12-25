#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    double product = 1;
    for(double i = 1; i <= n; i++){
        product *= (i + (i + 1))/((i + 2) + (i + 3));
    }

    cout << product;
    return 0;
}