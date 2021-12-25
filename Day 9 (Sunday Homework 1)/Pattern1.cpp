#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int offset = 3;
    for(int i = offset; i < n + offset; i++){

        for(int j = offset; j <= i; j++){
            cout << i << ' ';
        }

        cout << '\n';
    }

    for(int i = n + offset - 2; i >= offset; i--){

        for(int j = offset; j <= i; j++){
            cout << i << ' ';
        }

        cout << endl;
    }

    return 0;
}