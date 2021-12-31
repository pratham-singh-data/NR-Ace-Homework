#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    double sum = 0;
    double fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;
        sum += i / (fact + 1.0);
    }

    cout << sum;
    return 0;
}