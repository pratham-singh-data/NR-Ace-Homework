#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void getSubsets(vector<int> arr, int index, vector<int>& result){
    if(index < 0){
        result.push_back(0);
        return;
    }

    getSubsets(arr, index - 1, result);

    vector<int> temp;
    for(int val: result){
        temp.push_back(val + arr[index]);
    }

    for(int val: temp){
        result.push_back(val);
    }
}

vector<int> go(vector<int> v){
    vector<int> sums;
    getSubsets(v, v.size() - 1, sums);
    return sums;
}

int main(){
    vector<int> arr;

    int total;
    cout << "Total: ";
    cin >> total;

    while(total--){
        arr.push_back(total);
    }

    vector<int> allSubsets = go(arr);
    display(allSubsets);
    cout << allSubsets.size() << '\n';

    return 0;
}