#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    double sum = 0;
    for(double i = 0; i < n; i++){
        sum += ((i + 1) + (i + 3))/((i + 2) * (i + 3));
    }

    cout << sum;
    return 0;
}