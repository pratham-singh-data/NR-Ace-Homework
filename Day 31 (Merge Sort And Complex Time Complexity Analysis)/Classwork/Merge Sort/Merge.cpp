#include<bits/stdc++.h>
using namespace std;

template<class T>
vector<T> merge(vector<T> a, vector<T> b, int m, int n){
    int p1 = 0, p2 = 0;
    vector<T> out;

    while(p1 < m && p2 < n){
        if(a[p1] <= b[p2]){
            out.push_back(a[p1]);
            p1++;
            continue;
        }

        out.push_back(b[p2]);
        p2++;
    }

    while(p1 < m){
        out.push_back(a[p1]);
        p1++;
    }

    while (p2 < n){
        out.push_back(b[p2]);
        p2++;
    }

    return out;
}

template<class T>
void display(vector<T> inp){
    for(int i = 0; i < inp.size(); i++){
        cout << inp[i] << ' ';
    }
    cout << endl;
}

int main(){
    vector<int> a, b;
    int m, n;

    cout << "Enter size of first array: ";
    cin >> m;
    for(int i = 0; i < m; i++){
        int temp;
        cout << "Enter element at index " << i << ": ";
        cin >> temp;
        a.push_back(temp);
    }

    cout << "Enter size of second array: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cout << "Enter element at index " << i << ": ";
        cin >> temp;
        b.push_back(temp);
    }

    vector<int> out = merge(a, b, m, n);
    display(out);

    return 0;
}