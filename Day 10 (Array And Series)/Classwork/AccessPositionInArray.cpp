#include<iostream>
using namespace std;

void show(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    *(arr + 3) = 70;

    show(arr, n);

    cout << arr[3] + arr[4] << endl;
}