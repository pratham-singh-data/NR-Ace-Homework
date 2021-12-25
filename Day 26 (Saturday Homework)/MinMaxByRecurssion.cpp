#include<iostream>
using namespace std;

void getRes(int MinMax[2], int arr[], int n, int curr = 0){
    if(curr == n){
        return;
    }

    if(curr == 0){
        MinMax[0] = arr[0];
        MinMax[1] = arr[1];
    }

    if(arr[curr] > MinMax[1]){
        MinMax[1] = arr[curr];
    }

    if(arr[curr] < MinMax[0]){
        MinMax[0] = arr[curr];
    }

    getRes(MinMax, arr, n, curr + 1);
}

int main(){
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value at index " << i << ": ";
        cin >> arr[i];
    }

    int MinMax[2];
    getRes(MinMax, arr, n);

    cout << "Minimum value: " << MinMax[0] << '\n';
    cout << "Maximum value: " << MinMax[1] << '\n';

    return 0;
}