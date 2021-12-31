#include<iostream>
using namespace std;

long long int output(int arr[], int n){
    long long int sum = 0, midVal = 0;

    for(int i = 0; i < n; i++){
        midVal += arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i] * (midVal - arr[i]);
    }

    return sum;
}

int main(){
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value at index " << i << ": ";
        cin >> arr[i];
    }

    cout << output(arr, n);
}