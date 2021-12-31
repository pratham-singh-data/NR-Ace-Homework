#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {5, 3, 8, 1, 6, 4, 2};

    stack<int> s;
    int nsv[n];

    for(int i = 0; i < n; i++){
        while((! s.empty()) && (arr[s.top()] >= arr[i])){
            s.pop();
        }

        if(s.empty()){
            nsv[i] = -1;
        }
        else{
            nsv[i] = s.top();
        }

        s.push(i);
    }

    for(int i = 0; i < n; i++){
        cout << nsv[i] << '\t';
    }
    cout << '\n';

    return 0;
}