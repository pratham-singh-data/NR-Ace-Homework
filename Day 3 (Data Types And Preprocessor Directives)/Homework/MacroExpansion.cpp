#include<iostream>
#include<cmath>
#define long double
#define MAX 10 
using namespace std;

void display(long arr[]){
    for(int i = 0; i < MAX; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(){
    long arr[MAX];

    int entry;
    cout << "Enter the factor: ";
    cin >> entry;

    for(int i = 0; i < MAX; i++){
        arr[i] = log(pow(entry, pow(i, 0.95)));
    }

    display(arr);
}