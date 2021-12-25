// 1. Make frequency array
// 2. Make Prefix Array of frequency array
// 3. Reverse traverse and assign position by prefix frequency array
// 4. Copy into orginal array and return result.

#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void countingSort(int arr[], int n){
    // get max of array
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }

    // create frequency array
    int freq[max + 1] = {0};
    for (int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    // make prefix array
    for (int i = 1; i <= max; i++){
        freq[i] += freq[i - 1];
    }

    // create final array
    int final[n];
    for (int i = n; i >= 0; i--){
        final[freq[arr[i]] - 1] = arr[i];
        freq[arr[i]]--;
    }

    // copy to original array
    for (int i = 0; i < n; i++){
        arr[i] = final[i];
    }
}

int main(){
    int arr[] = {0, 7, 3, 6, 9, 6, 4, 2, 3, 0, 2, 6, 4, 7, 8, 9, 6, 5};
    int n = 18;

    //call counting sort
    countingSort(arr, n);

    // show result
    display(arr, n);

    return 0;
}