// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long maxSum = LONG_MIN;
        long long currSum = 0;
        
        for(int i = 0; i < n; i++){
            if(maxSum < 0){
                if(maxSum < arr[i]){
                    maxSum = arr[i];
                }
                // to handle for fully negative array
                // only one highest value is to be added
            }
            
            // at least one positive value
            if(currSum + arr[i] < 0){ 
                // discard if addition returns negative
                currSum = 0;
                continue;
            }
            
            currSum += arr[i];
            
            if(maxSum < currSum){
                maxSum = currSum;
            }
        }
        
        return maxSum;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends