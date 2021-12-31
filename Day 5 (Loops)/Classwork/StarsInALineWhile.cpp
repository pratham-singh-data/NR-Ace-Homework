#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number of stars to be printed: ";
    cin >> num;

    int counter = 0; // initaialisation
    while(counter < num){ // termination condition
        cout << '*';
        counter++; // updation
    }

    return 0;
}