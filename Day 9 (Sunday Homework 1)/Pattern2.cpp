#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){

        for(int j = 0; j < i; j++){
            if(i == 1 || j == i - 1){
                cout << i;
                continue;
            }

            cout << i << '*';
        }

        cout << "\n";
    }

    for(int i = n; i >= 1; i--){

        for(int j = 0; j < i; j++){
            if(i == 1 || j == i - 1){
                cout << i;
                continue;
            }

            cout << i << '*';
        }

        cout << "\n";
    }

    return 0;
}