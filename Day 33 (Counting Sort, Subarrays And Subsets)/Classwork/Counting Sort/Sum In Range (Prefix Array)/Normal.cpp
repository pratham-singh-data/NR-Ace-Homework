#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {5, 3, 5, 1, 2, 3, 2, 4, 7, 6, 5};

    int queries;
    cout << "Total Queries: ";
    cin >> queries;

    for(int i = 0; i < queries; i++){
        int l, r, sum = 0;
        cout << "l = ";
        cin >> l;
        cout << "r = ";
        cin >> r;

        for(int j = l; j <= r; j++){
            sum += arr[j];
        }

        cout << "Sum = " << sum;
    }
}

// here complexity is O(q * n) which is bad, we can improve this