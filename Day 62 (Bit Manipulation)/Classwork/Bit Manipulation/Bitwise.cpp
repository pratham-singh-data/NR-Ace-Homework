#include<iostream>
using namespace std;

int main(){
    int x, i;
    cout << "Enter value: ";
    cin >> x;

    cout << "Left shift by: ";
    cin >> i;

    cout << (x << i) << '\n';

    cout << "Right shift by: ";
    cin >> i;

    cout << (x >> i) << '\n';

    return 0;
}