#include<iostream>
using namespace std;

double add(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double mult(double a, double b){
    return a * b;
}

double divide(double a, double b){
    return a / b;
}

double calculator(double a, double b, char op){
    if(op == '+') return add(a, b);
    if(op == '-') return subtract(a, b);
    if(op == '*') return mult(a, b);
    if(op == '/') return divide(a, b);
    return INT_MIN;
}

int main(){
    double a, b;
    char op;

    cout << "Welcome to the calculator: (x as operator to end) \n";
       
    while(true){
        cin >> a >> b >> op;
        if(op == 'x') break;
        cout << calculator(a, b, op) << endl;;
    }

    cout << "Thanks for visiting\n";
}