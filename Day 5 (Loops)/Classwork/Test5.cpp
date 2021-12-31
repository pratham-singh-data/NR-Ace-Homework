#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    cout << "For Loop: (No executions)\n";
    for(int i = 0; false; i++){
        cout << "Hello";
    }

    cout << "Do - While: (At least one Execution)\n";
    do{
        cout << "Hello";
    }while(false);

    return 0;
}