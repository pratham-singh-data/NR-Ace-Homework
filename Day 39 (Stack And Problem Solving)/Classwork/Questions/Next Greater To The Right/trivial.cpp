#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {5, 3, 8, 1, 6, 4, 2};
    int n = 7;

    int ngr[7];
    for(int i = 0; i < n; i++){
        int next_greater_right = n;
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                next_greater_right = j;
                break;
            }
        }
        ngr[i] = next_greater_right;
    }

    for(int i = 0; i < n; i++){
        cout << ngr[i] << '\t';
    }

    cout << '\n';
    return 0;
}

// at each element traverse to right and fill with first greater element