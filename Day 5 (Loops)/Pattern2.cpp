#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1 - i; j++){
            cout << ' ';
        }

        for(int j = 1; j <= (2*i + 1); j++){
            cout << '*';
        }

        cout << '\n';
    }
}