#include<iostream>
using namespace std;

void line(){
    for(int i = 0; i < 70; i++){
        cout << "=";
    }

    cout << endl;
}

int main(){
    char a, b;   
    cout << "Enter two integer numbers: ";
    cin >> a >> b;

    // charachter internally converts to corresponding integer values by ASCII, operations are performed
    // on these ASCII values

    // Binary Operators need parenthesis as they have lower priorty than << 
    cout << "Binary AND: " << (a & b) << endl; 
    cout << "Binary OR: " << (a | b) << endl; 
    cout << "Binary XOR: " << (a ^ b) << endl; 

    // NOT acts like logical NOT and converts non zero to False that gets displayed as 0
    cout << "Binary NOT a: " << !a << endl;
    cout << "Binary NOT b: " << !b << endl; 

    // Arithmatic Operators; Written here to avoid crashing duw to divide by zero error
    cout << "Charachter Addition: " << a + b << endl;
    cout << "Charachter Subtraction a - b: " << a - b << endl;
    cout << "Charachter Subtraction b - a: " << b - a << endl;
    cout << "Charachter Multiplication: " << a * b << endl;
    cout << "Charachter Division a / b: " << a / b << endl;
    cout << "Charachter Division b / a: " << b / a << endl;
    cout << "Charachter Modulo a % b: " << a % b << endl;
    cout << "Charachter Modulo b % a: " << b % a << endl;

    line();

    // Repeat above operations but convert values back to char
    cout << "Charachter Addition: " << (char) (a + b) << endl;
    cout << "Charachter Subtraction a - b: " << (char) (a - b) << endl;
    cout << "Charachter Subtraction b - a: " << (char) (b - a) << endl;
    cout << "Charachter Multiplication: " << (char) (a * b) << endl;
    cout << "Charachter Division a / b: " << (char) (a / b) << endl;
    cout << "Charachter Division b / a: " << (char) (b / a) << endl;
    cout << "Charachter Modulo a % b: " << (char) (a % b) << endl;
    cout << "Charachter Modulo b % a: " << (char) (b % a) << endl;

    cout << "Binary NOT a: " << (char) !a << endl;
    cout << "Binary NOT b: " << (char) !b << endl; 

    cout << "Binary AND: " << (char) (a & b) << endl; 
    cout << "Binary OR: " << (char) (a | b) << endl; 
    cout << "Binary XOR: " << (char) (a ^ b) << endl;

    return 0;
}