#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    double sum = 0;
    long long int fact = 1;
    double num = 1;
    for(double i = 1; i <= n; i++){
        fact *= i;
        cout << num << " " << fact << endl;
        sum += num/fact;
        num += i + 1;
    }

    cout << sum;
    return 0;
}