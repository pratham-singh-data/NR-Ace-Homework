#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v){
    for(int i = 1; i < v.size(); i++){
        int temp = v[i];
        int j = i - 1;

        while(j >= 0 && v[j] > temp){
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = temp;
    }
}

int main(){
    vector<int> v;

    // 8 5 1 100 20 15 3
    v.push_back(8);
    v.push_back(5);
    v.push_back(1);
    v.push_back(100);
    v.push_back(20);
    v.push_back(15);
    v.push_back(3);

    cout << "Pre Sort:\n";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;

    insertionSort(v);

    cout << "Post Sort:\n";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;

    cout << endl
         << endl;

    vector<int> v1;

    // 8 5 1 100 20 15 3
    v1.push_back(5);
    v1.push_back(4);
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(3);

    cout << "Pre Sort:\n";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << ' ';
    }
    cout << endl;

    insertionSort(v1);

    cout << "Post Sort:\n";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << ' ';
    }
    cout << endl;

    return 0;
}