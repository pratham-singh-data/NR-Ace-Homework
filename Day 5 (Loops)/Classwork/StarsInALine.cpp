#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter number of stars: ";
    cin >> a;

    for(int i = 0; i < a; i++){
        cout << "*";
    }

    return 0;
}