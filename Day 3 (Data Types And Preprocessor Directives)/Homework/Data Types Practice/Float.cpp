#include<iostream>
using namespace std;

int main(){
    float a, b;   
    cout << "Enter two single precision floating point numbers: ";
    cin >> a >> b;

    // Binary Operators are not supported on float

    // Binary Operators need parenthesis as they have lower priorty than << 
    // cout << "Binary AND: " << (a & b) << endl; 
    // cout << "Binary OR: " << (a | b) << endl; 
    // cout << "Binary XOR: " << (a ^ b) << endl; 

    // NOT acts like logical NOT and converts non zero to False that gets displayed as 0
    // cout << "Binary NOT a: " << !a << endl;
    // cout << "Binary NOT b: " << !b << endl; 

    // Arithmatic Operators; Written here to avoid crashing duw to divide by zero error
    cout << "Single precision floating Point Addition: " << a + b << endl;
    cout << "Single precision floating Point Subtraction a - b: " << a - b << endl;
    cout << "Single precision floating Point Subtraction b - a: " << b - a << endl;
    cout << "Single precision floating Point Multiplication: " << a * b << endl;
    cout << "Single precision floating Point Division a / b: " << a / b << endl;
    cout << "Single precision floating Point Division b / a: " << b / a << endl;

    // % is a binary operator too hence it cannot be used on float data either
    // cout << "Single precision floating Point Modulo a % b: " << a % b << endl;
    // cout << "Single precision floating Point Modulo b % a: " << b % a << endl;
}