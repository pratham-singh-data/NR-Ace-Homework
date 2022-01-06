#include <iostream>
using namespace std;

void setBit(int x, int i){
    cout << (x | (1 << i)) << '\n';
}

void unsetBit(int x, int i){
    cout << (x & ~(1 << i)) << '\n';
}

void isSet(int x, int i){
    cout << ((x & (1 << i)) != 0);
}

int main()
{
    int x, i;
    cout << "Enter x: ";
    cin >> x;

    cout << "Enter i: ";
    cin >> i;

    setBit(x, i);
    unsetBit(x, i);
    isSet(x, i);

    return 0;
}