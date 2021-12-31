#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of stars: ";
    cin >> n;

    int count = 0;
    for(int i = 0; i < 3 * n; i++){
        for(int j = 0; j < n * n; j++){
            cout << "*";
            count++;
        }

        cout << "\n";
    }

    cout << count;

    return 0;
}