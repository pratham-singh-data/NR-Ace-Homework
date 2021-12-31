#include <iostream>
using namespace std;

void callByValue(int& a, int& b)
{
    a = 3;
    b = 4;
    cout << "Inside Function: " << a << '\t' << b << '\n';
}

int main()
{
    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "Prior Call: " << a << '\t' << b << '\n';

    callByValue(a, b);

    cout << "Post Call: " << a << '\t' << b << '\n';
}