#include<bits/stdc++.h>
using namespace std;

void getSubsets(vector<int> arr, int index, vector<vector<int>>& allSubsets, vector<int>& currSubset){
    if(index < 0){
        allSubsets.push_back(currSubset);
        return;
    }
    // branch and bound
    currSubset.push_back(arr[index]);
    getSubsets(arr, index - 1, allSubsets, currSubset);
    currSubset.pop_back();
    getSubsets(arr, index - 1, allSubsets, currSubset);
}

int main(){
    vector<int> arr;

    int tot;
    cout << "Total values: ";
    cin >> tot;

    while(tot--){
        arr.push_back(tot);
    }

    vector<vector<int>> allSubsets;
    vector<int> currSubset;

    getSubsets(arr, arr.size() - 1, allSubsets, currSubset);

    for(vector<int> subset: allSubsets){
        for(int x: subset){
            cout << x << ' ';
        }
        cout << '\n';
    }

    cout << "Total Subsets: " << allSubsets.size() << '\n';

    return 0;
}