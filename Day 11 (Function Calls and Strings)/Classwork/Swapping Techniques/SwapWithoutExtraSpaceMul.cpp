#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a * b;
    b = a / b;
    a = a / b;
}

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "Post Swap:\n";
    cout << a << '\t' << b << '\n';

    swap(a, b);

    cout << "Pre Swap:\n";
    cout << a << '\t' << b << '\n';
    return 0;
}