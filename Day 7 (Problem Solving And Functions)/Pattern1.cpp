#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(char j = 'A'; j <= 'A' + i ;j++){
            cout << j << ' ';
        }

        for(char j = 'A' + i - 1; j >= 'A'; j--){
            cout << j << ' ';
        }

        cout << '\n';
    }

    return 0;
}