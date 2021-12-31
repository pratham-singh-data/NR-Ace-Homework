#include<iostream>
using namespace std;

double returner(int n){
    double sum = 0;

    for(double i = 1; i <= n; i++){
        sum += i / (i + 1);
    }

    return sum;
}

int main(){
    int n;
    cout << "Value of n: ";
    cin >> n;

    cout << "The result is " << returner(n) << '\n';
    return 0;
}