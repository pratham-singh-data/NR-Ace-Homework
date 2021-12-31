#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> um;

    int inputs;
    cout << "Enter number of inputs: ";
    cin >> inputs;

    cout << "Enter " << inputs << " integers:\n";
    while(inputs--){
        int value;
        cin >> value;
        um[value]++;
    }

    int tests;
    cout << "Enter number of tests: ";
    cin >> tests;

    while(tests--){
        int k;
        cout << "k = ";
        cin >> k;
        vector<int> output;

        for (pair<int, int> p : um){
            if (p.second >= k){
                output.push_back(p.first);
            }
        }

        sort(output.begin(), output.end());
        if(output.begin() == output.end()){
            cout << "No results";
        }

        for (int i : output){
            cout << i << '\t';
        }
        cout << "\n===============================================================================\n";
    }

    return 0;
}