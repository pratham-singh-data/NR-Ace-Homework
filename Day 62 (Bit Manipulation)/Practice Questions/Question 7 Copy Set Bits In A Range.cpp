#include <bits/stdc++.h>
using namespace std;

int getValue(int a, int b, int l, int r){
    int maskSize = r - l + 1;
    int mask = 1;
    
    while(--maskSize){
        mask = (mask << 1) + 1;
    }
    mask = mask << (l - 1);
    
    b = b & mask;
    
    return a | mask;
}

int main() {
	int tests;
	cin >> tests;
	
	while(tests--){
	    int a, b, l, r;
	    cin >> a >> b >> l >> r;
	    cout << getValue(a, b, l, r) << '\n';
	}
	
	return 0;
}