#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[] = {3, 0, 0, 2, 0, 4};

    int lgh[n], rgh[n];

    // left greatest height
    lgh[0] = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > lgh[i - 1]){
            lgh[i] = arr[i];
        }
        else{
            lgh[i] = lgh[i-1];
        }
    }

    // left greatest height
    rgh[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--){
        if (arr[i] > rgh[i + 1]){
            rgh[i] = arr[i];
        }
        else{
            rgh[i] = rgh[i + 1];
        }
    }

    // get volume
    int volume = 0;
    for (int i = 0; i < n; i++){
        if(lgh[i] < rgh[i]){
            volume += lgh[i] - arr[i];
        }
        else{
            volume += rgh[i] - arr[i];
        }
    }

    cout << "Volume: " << volume;
    
    return 0;
}