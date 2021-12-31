// code to generate all subsets of a given array
#include<bits/stdc++.h>
using namespace std;

void getSubsets(vector<int> test, int i, vector<vector<int>>& allSubsets, vector<int>& currSubset){
    // i points to the last element of the array to get all subsets we need only all the last value to 
    // each of the previous subsets
    if(i < 0){
        allSubsets.push_back(currSubset);
        return;
    }

    getSubsets(test, i - 1, allSubsets, currSubset);
    currSubset.push_back(test[i]);
    getSubsets(test, i - 1, allSubsets, currSubset);
    currSubset.pop_back();
}

int main(){
    vector<vector<int>> allSubsets;
    vector<int> currSubset;

    vector<int> test = {1, 2, 3, 4};

    getSubsets(test, test.size() - 1, allSubsets, currSubset);

    for(vector<int> subset: allSubsets){
        for(int val: subset){
            cout << val << ' ';
        }
        cout << '\n';
    }

    return 0;
}