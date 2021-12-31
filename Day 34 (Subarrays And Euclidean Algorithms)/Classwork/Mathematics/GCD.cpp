#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0){
        return b;
    }

    if(a > b){
        return gcd(a - b, b);
    }
    else{
        return gcd(b - a, a);
    }
}

int main(){
    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);

    return 0;
}

// Time complexity is O(max(a, b))
// Note that in average case (where one input is not 1); reduction is fairly fast and n stack frames are not created.