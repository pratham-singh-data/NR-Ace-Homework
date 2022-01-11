// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
       int total = 0, res1 = 0, res2 = 0;
       
       for(int i = 0; i < nums.size(); i++){
           total = total ^ nums[i];
       }
       
       // we now have xor of the two unique numbers.
       // we will differentiate based on location of last set bit
       int lastSetMask = total & ~(total - 1);
       
       // get the two values
       for(int i = 0; i < nums.size(); i++){
           if(nums[i] & lastSetMask){
               res1 = res1 ^ nums[i];
           }
           else{
               res2 = res2 ^ nums[i];
           }
       }
       
       // result s supposed to set in sorted order
       if(res1 < res2){
           return vector<int>({res1, res2});
       }
       else{
           return vector<int>({res2, res1});
       }
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends