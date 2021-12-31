#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int i = 0; i < n / 2; i++){
        for(int j = i; j > 0; j--){
            cout << ' ';
        }

        cout << '*';

        for(int j = n - 2 * i - 2; j > 0; j--){
            cout << ' ';
        }

        cout << '*';
        cout << endl;
    }

    if(n % 2 != 0){
        for(int i = n / 2; i > 0; i--) 
            cout << ' ';
        cout << '*';
        cout << endl;
    }

    for(int i = n / 2; i > 0; i--){
        for(int j = i - 1; j > 0; j--){
            cout << ' ';
        }

        cout << '*';

        for(int j = n - 2 * i; j > 0; j--){
            cout << ' ';
        }

        cout << '*';
        cout << endl;
    }
}