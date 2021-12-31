#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<double> s;

    for(double i = 0.5; i <= 10.5; i+=0.0001){
        s.push(i);
    }

    for (double i = 0.5; i <= 10.5; i+=0.0001){
        cout << s.top() << '\t';
        s.pop();
        // stl pop() does not return the deleted value
    }
}