#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << ((a > b) ? 3 : 5);
    // use parenthesis as << has higher precedence that the ternary operator.

    return 0;
}