#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of stars: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        int count = 0;

        while(count < 2 * n){
            cout << "Hello";
            count++;
        }

        cout << "\n";
    }

    return 0;
}