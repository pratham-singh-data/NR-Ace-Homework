#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target)
            return i;
    } 

    return INT_MAX;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i< n; i++){
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i]; 
    }

    int target;
    cout << "Enter value to be found: ";
    cin >> target;

    cout << "Value is present at index: " << linearSearch(arr, n, target);
    return 0;
}