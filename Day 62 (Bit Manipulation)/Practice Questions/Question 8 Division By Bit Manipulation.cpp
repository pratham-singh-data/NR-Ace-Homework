// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long divident, long long divisor) 
    {
        //code here
        long long result = 0;
        bool neg = false;
        
        if(divident == 0 || divisor == 0) return result;
        
        if(divident < 0 && divisor < 0){
            divident = -divident;
            divisor = -divisor;
        }
        
        if(divident < 0 && !(divisor < 0)){
            divident = -divident;
            neg = true;
        }
        
        if(!(divident < 0) && divisor < 0){
            neg = true;
            divisor = -divisor;
        }
        
        while(divisor <= divident){
            long long count = 1;
            long long b = divisor;
            
            while(b < divident){
                count = count << 1;
                b = b << 1;
            }
            
            if(count != 1){
                b = b >> 1;
                count = count >> 1;
            }
            
            result += count;
            divident -= b;
        }
        
        if(neg){
            result = -result;
        }
        
        return result;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}
  // } Driver Code Ends