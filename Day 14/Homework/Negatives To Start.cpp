#include<iostream>
using namespace std;

void show(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void swap(int& a, int& b){
    a += b;
    b = a - b;
    a = a - b;
}

void mover(int arr[], int n){
    int low = 0, high = n - 1;
    // low will iterate till it encounters a positive value it will then swap with high, which will then iterate
    // then low iterates again till, it no longer has a positive value beneath it
    // this continues till high > low

    while(high > low){
        if(arr[low] > 0){
            swap(arr[low], arr[high]);
            high--;
            continue;
        }

        low++;
    } 
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element at index: ";
        cin >> arr[i];
    }

    mover(arr, n);
    show(arr, n);

    return 0;
}