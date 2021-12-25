// Given an array of n integers and an integer x, Find total occurence of x in the array

#include<iostream>
using namespace std;

int occurences(int arr[], int n, int x){
    int count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == x) count++;
    }

    return count;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }

    int x;
    cout << "Enter value for x: ";
    cin >> x;

    cout << "Occurences are: " << occurences(arr, n, x);
}