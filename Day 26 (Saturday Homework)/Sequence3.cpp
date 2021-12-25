#include<iostream>
using namespace std;

double sum(int n, double curr = 1, double currSum = 0, double fact = 1){
    if(n == 0 || curr == n + 1){
        return 0;
    }

    currSum += curr;
    fact *= curr;
    return currSum / fact + sum(n, curr + 1, currSum, fact);
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "The sum is: " << sum(n) << '\n';
    return 0;
}