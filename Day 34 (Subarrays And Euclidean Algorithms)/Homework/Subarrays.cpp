#include<bits/stdc++.h>
using namespace std;

void getSubarrays(vector<int> arr){
    cout << " \n";

    for(int size = 1; size <= arr.size(); size++){
        for(int start = 0; start < arr.size() - size + 1; start++){
            for(int i = start; i < start + size; i++){
                cout << arr[i] << ' ';
            }
            cout << '\n';
        }
    }
}

int main(){
    vector<int> arr;

    int total;
    cout << "Total = ";
    cin >> total;

    while(total--){
        arr.push_back(total);
    }

    getSubarrays(arr);
    return 0;
}