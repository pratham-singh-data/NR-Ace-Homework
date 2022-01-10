#include <bits/stdc++.h>
using namespace std;

long long power(int inp){
    if(inp < 0){
        inp = -inp;
    }
    
    int nums = inp;
	long long result = inp;
	
	while(nums > 1){
	    int shifts = 0, val = 1;
	    
	    while(val < nums){
	        val = val << 1;
	        shifts++;
	    }
	    
	    if(val != 1){
	        val = val >> 1;
	        shifts--;
	    }
	    
	    result +=  inp << shifts;
	    nums -= val;
	}
	return result;
}

int main() {
	//code
	int tests;
	cin >> tests;
	
	while(tests--){
	    int inp;
	    cin >> inp;
	    cout << power(inp) << '\n';
	}
	
	
	
	return 0;
}