#include<iostream>
using namespace std;

int sum(int arr[], int n){
    if(n == 1){
        return arr[0];
    }

    return arr[n - 1] + sum(arr, n - 1);
}

int main(){
    int n;
    cout << "Enter number of values in the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value at index " << i << " :";
        cin >> arr[i];
    }

    cout << "The sum is: " << sum(arr, n);

    return 0;
}