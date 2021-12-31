// if we make a prefix array then we canfind sum between l - r by prefix[r] - prefix[l - 1]
// as prefix[l] = arr[l] + arr[l - 1] and so on...
// and prefic[r] = arr[r] + arr[r - 1] and so on...
// so prefix[r] - prefix[l - 1] = arr[r] + arr[r - 1] + ... + arr[l + 1] + arr[l]

#include<bits/stdc++.h>
using namespace std;

int min(int a, int b){
    if(a < b) 
        return a;
    return b;
}

int max(int a, int b){
    if (a > b)
        return a;
    return b;
}

int main(){
    vector<int> arr = {5, 3, 5, 1, 2, 3, 2, 4, 7, 6, 5};

    // create prefix array:
    vector<int> prefix = {arr[0]};

    for(int i = 0; i < arr.size() - 1; i++){
        prefix.push_back(prefix[i] + arr[i + 1]);
    }

    // do our calls
    int queries;
    cout << "Total Queries: ";
    cin >> queries;

    while(queries--){
        int l, r;
        cout << "l = ";
        cin >> l;
        cout << "r = ";
        cin >> r;

        r = min(arr.size() - 1, r);
        l = max(0, l);

        cout << prefix[r] - (l == 0? 0: prefix[l - 1]) << '\n';
    }

    return 0;
}

// Now time complexity is O(max(q, n))