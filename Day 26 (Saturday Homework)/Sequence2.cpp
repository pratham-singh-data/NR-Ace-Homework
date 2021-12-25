#include<iostream>
using namespace std;

double sum(int n, double curr = 1, double fact = 1){
    if(n == 0 || curr == n + 1){
        return 0;
    }

    fact *= curr;
    curr++;
    return fact / curr + sum(n, curr, fact);
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "The sum is " << sum(n) << "\n";
    return 0; 
}