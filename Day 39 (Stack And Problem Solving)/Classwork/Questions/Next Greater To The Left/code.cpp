#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[] = {5, 3, 8, 1, 6, 4, 2};

    int ngl[n];
    stack<int> s;

    for(int i = 0; i < n; i++){
        while((! s.empty()) && (arr[s.top()] <= arr[i])){
            s.pop();
        }

        if(s.empty()){
            ngl[i] = -1;
        }
        else{
            ngl[i] = s.top();
        }

        s.push(i);
    }

    for(int i = 0; i < n; i++){
        cout << ngl[i] << '\t';
    }
    cout << '\n';
}