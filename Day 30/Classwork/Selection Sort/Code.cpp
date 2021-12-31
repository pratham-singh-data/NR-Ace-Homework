#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& v){
    for(int i = 0; i < v.size() - 1; i++){
        int min_index = i;

        for(int j = i + 1; j < v.size(); j++){
            if(v[min_index] > v[j]){
                min_index = j;
            }
        }

        if(min_index == i){
            continue;
        }

        v[i] = v[i] + v[min_index];
        v[min_index] = v[i] - v[min_index];
        v[i] = v[i] - v[min_index];
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
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;

    selectionSort(v);

    cout << "Post Sort:\n";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;

    cout << endl << endl;
    
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

    selectionSort(v1);

    cout << "Post Sort:\n";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << ' ';
    }
    cout << endl;

    return 0;
}