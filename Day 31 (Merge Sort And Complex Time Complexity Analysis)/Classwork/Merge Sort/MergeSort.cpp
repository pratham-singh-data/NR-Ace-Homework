#include<bits/stdc++.h>
using namespace std;

template <class T>
void display(vector<T> inp){
    for (int i = 0; i < inp.size(); i++){
        cout << inp[i] << ' ';
    }
    cout << endl;
}

template<class T>
void merge(vector<T>& inp, int low, int mid, int high){
    vector<T> first;
    vector<T> second;

    for(int i = low; i <= mid; i++){
        first.push_back(inp[i]);
    }

    for(int i = mid + 1; i <= high; i++){
        second.push_back(inp[i]);
    }

    int p1 = 0, p2 = 0;
    while(p1 < first.size() && p2 < second.size()){
        if(first[p1] <= second[p2]){
            inp[low++] = first[p1++];
            continue;
        }

        inp[low++] = second[p2++];
    }

    while(p1 < first.size()){
        inp[low++] = first[p1++];
    }

    while (p2 < second.size()){
        inp[low++] = second[p2++];
    }
}

template<class T>
void mergeSort(vector<T>& inp, int low, int high){
    if(high <= low) return; // we have either one or no elements

    int mid = (low + high) / 2;
    mergeSort(inp, low, mid);
    mergeSort(inp, mid + 1, high);
    merge(inp, low, mid, high);
}

int main(){
    vector<int> inp;
    int n;

    cout << "Enter size of array: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cout << "Enter the element at index " << i << " : ";
        cin >> temp;
        inp.push_back(temp);
    }

    mergeSort(inp, 0, n - 1);

    display(inp);

    return 0;
}