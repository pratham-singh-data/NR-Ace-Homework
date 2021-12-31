#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {5, 3, 8, 1, 6, 4, 2};
    int n = 7;

    int ngr[7];
    stack<int> s;

    for(int i = n - 1; i >= 0; i--){
        while((! s.empty()) && (arr[s.top()] <= arr[i])){
            s.pop();
        }

        if(s.empty()){
            ngr[i] = n;
        }
        else{
            ngr[i] = s.top();
        }

        s.push(i);
    }

    for(int i = 0; i < n; i++){
        cout << ngr[i] << ' ';
    }
    cout << '\n';

    return 0;
}

// Inner loop will only delete each element once so inner loop executes to tal n times so complexity is O(n)