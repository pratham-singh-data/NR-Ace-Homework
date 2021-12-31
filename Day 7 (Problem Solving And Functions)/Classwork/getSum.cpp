#include<iostream>
using namespace std;

// write a function that takes 2 integers and returns their sum
int getSum(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << getSum(a, b);
    return 0;
}