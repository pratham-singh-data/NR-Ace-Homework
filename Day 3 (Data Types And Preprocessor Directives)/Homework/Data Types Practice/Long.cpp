#include<iostream>
using namespace std;

int main(){
    long a, b;   
    cout << "Enter two integer numbers: ";
    cin >> a >> b;

    // Binary Operators need parenthesis as they have lower priorty than << 
    cout << "Binary AND: " << (a & b) << endl; 
    cout << "Binary OR: " << (a | b) << endl; 
    cout << "Binary XOR: " << (a ^ b) << endl; 

    // NOT acts like logical NOT and converts non zero to False that gets displayed as 0
    cout << "Binary NOT a: " << !a << endl;
    cout << "Binary NOT b: " << !b << endl; 

    // Arithmatic Operators; Written here to avoid crashing duw to divide by zero error
    cout << "Integer Addition: " << a + b << endl;
    cout << "Integer Subtraction a - b: " << a - b << endl;
    cout << "Integer Subtraction b - a: " << b - a << endl;
    cout << "Integer Multiplication: " << a * b << endl;
    cout << "Integer Division a / b: " << a / b << endl;
    cout << "Integer Division b / a: " << b / a << endl;
    cout << "Integer Modulo a % b: " << a % b << endl;
    cout << "Integer Modulo b % a: " << b % a << endl;

    return 0;
}