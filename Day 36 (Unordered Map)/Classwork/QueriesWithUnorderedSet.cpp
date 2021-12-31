#include<bits/stdc++.h>
using namespace std;

template<class T>
bool isPresent(unordered_set<T> s, int key){
    if(s.find(key) == s.end()){
        return false;
    }

    return true;
}

int main(){
    int q;
    cin >> q;

    unordered_set<int> us;

    while(q--){
        int type, value;
        cin >> type >> value;

        if(type == 1){
            us.insert(value);
        }
        else{
            cout << isPresent(us, value) << '\n';
        }
    }

    return 0;
}