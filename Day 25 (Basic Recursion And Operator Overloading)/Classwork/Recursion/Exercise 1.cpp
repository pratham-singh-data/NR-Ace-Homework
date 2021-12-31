// given an array 
//     1 2 3 .... n n+1
// erite a recursive code to reverse the array
#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    cout << '\n';
}

void reverse(int arr[], int n, int curr = 0){
    if(curr == n/2){
        return;
    }

    arr[curr] = arr[curr] + arr[n - curr - 1];
    arr[n - curr - 1] = arr[curr] - arr[n - curr - 1];
    arr[curr] = arr[curr] - arr[n - curr - 1];
    reverse(arr, n, curr + 1);
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    cout << "Before reverse:\n";
    display(arr, n);

    reverse(arr, n);

    cout << "After reverse:\n";
    display(arr, n);
}