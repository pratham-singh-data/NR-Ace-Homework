// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    void getSubsequences(int index, string s, string sAdd, vector<string>& out){
        if(index == s.length()){
            if(sAdd == "") return;
            
            out.push_back(sAdd);
            return;
        }
        
        getSubsequences(index + 1, s, sAdd + s[index], out);
        getSubsequences(index + 1, s, sAdd, out);
    }
    
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> out;
		    
		    getSubsequences(0, s, "", out);
		    
		    sort(out.begin(), out.end());
		    return out;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends