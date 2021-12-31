#include<iostream>
using namespace std;

void MinMax(int MaxMin[2], int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] > MaxMin[0]){
            MaxMin[0] = arr[i];
        }

        if(arr[i] < MaxMin[1]){
            MaxMin[1] = arr[i];
        }
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

    int MaxMin[2] = {INT_MIN, INT_MAX};

    MinMax(MaxMin, arr, n);
    cout << "Max value is: " << MaxMin[0] << '\n';
    cout << "Min value is: " << MaxMin[1]; 
}