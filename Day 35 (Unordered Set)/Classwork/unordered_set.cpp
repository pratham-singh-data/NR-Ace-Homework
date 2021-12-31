#include<bits/stdc++.h>
using namespace std;

void display(unordered_set<int> s){
    for(int a: s){
        cout << a << ' ';
    }
    cout << '\n';
}

int main(){
    unordered_set<int> s;
    s.insert(3);
    display(s);

    s.insert(4);
    display(s);

    s.insert(3);
    display(s);

    s.insert(2);
    display(s);
    return 0;
}