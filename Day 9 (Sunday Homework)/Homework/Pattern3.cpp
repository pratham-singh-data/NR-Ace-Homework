#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int curr = 1;
    for(int i = 1; i <= n; i++){

        for(int j = 0; j < i; j++){
            cout << curr++; 
            if (j == i - 1) break;
            cout << '*';
        }

        cout << '\n';
    }

    for(int i = n; i >= 1; i--){
        curr -= i;

        for(int j = 0; j < i; j++){
            cout << curr + j; 
            if (j == i - 1) break;
            cout << '*';
        }

        cout << '\n';
    }

    return 0;
}