// pass array into reverse() and all elements should appear in reverse

#include<iostream>
using namespace std;

void show(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    cout << endl;
}

void reverse(int arr[], int n){
    // as name of array is a pointer itself, this is pass by pointer, so change will reflect in original array
    // declaring as array, makes this local parameter a pointer too.
    for(int i = 0; i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    } 
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }

    show(arr, n);
    reverse(arr, n);
    show(arr, n);
    return 0;
}