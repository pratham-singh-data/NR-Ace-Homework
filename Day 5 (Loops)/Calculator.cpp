#include<iostream>
using namespace std;

int calculator(int a, int b, char op){
    if(op == '+') return a + b;
    else if(op == '-') return a - b;
    else if(op == '*') return a * b;
    else if(op == '/') return a / b;
    else if (op == '%') return a % b;
    else return INT_MIN;
}

int main(){
    cout << "Welcome to the calculator:\n";

    while(true){
        int a, b;
        char op;

        cout << "Enter the charachters and operator: ";
        cin >> a >> b;
        cin >> op;

        int res = calculator(a, b, op);
        cout << res << "\n\n";

        cout << "Continue y|n: ";
        cin >> op;

        if(op == 'n') break;
    }
}