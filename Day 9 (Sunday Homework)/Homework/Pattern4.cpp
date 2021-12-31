#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        if(i != 0) cout << "*\t";

        for(int j = 1; j <= i; j++){
            cout << j << '\t';
        }

        for(int j = i - 1; j >= 1; --j){
            cout << j << '\t';
        }

        cout << "*\n";
    }

    for(int i = n - 2; i >= 0; i--){
        if(i != 0) cout << "*\t";

        for(int j = 1; j <= i; j++){
            cout << j << '\t';
        }

        for(int j = i - 1; j >= 1; --j){
            cout << j << '\t';
        }

        cout << "*\n";
    }
    return 0;
}