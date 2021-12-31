# include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i =0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main(){
    int arr[] = {5, 3, 5, 1, 2, 3, 2, 4, 7, 6, 5};
    int n = 11;

    // find max element
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max < arr[i])
            max = arr[i];
    }

    // make frequency array
    int freq[max + 1] = {0};

    for (int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    // make prefix array of frequency array
    // we will use the frequency array itself t avoid need for additional space
    for(int i = 1; i < max + 1; i++){
        freq[i] += freq[i - 1];
    }

    // create final array by traversing array in reverse order
    int final[n];
    for(int i = n - 1; i >= 0; i--){
        final[freq[arr[i]] - 1] = arr[i];
        freq[arr[i]]--;
    }

    for(int i = 0;i < n; i++){
        arr[i] = final[i];
    }

    display(arr, n);
    return 0;
}