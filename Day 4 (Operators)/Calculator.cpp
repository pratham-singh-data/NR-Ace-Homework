#include<iostream>
using namespace std;

int calculator(int a, int b, char op){
    if(op == '+')
        return a + b;
    else if(op == '-')
        return a - b;
    else if(op == '*')
        return a * b;
    else if(op == '/')
        return a / b;
    else{
        cout << "Invalid Operator\n";
        return INT_MIN;
    }
}

int main(){
    int a, b;

    cout << "Calculator Started:\n";
    cin >> a >> b;

    char op;
    cin >> op;

    cout << calculator(a, b, op);

    return 0;
}