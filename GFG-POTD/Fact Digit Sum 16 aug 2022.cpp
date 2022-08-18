//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<int> FactDigit(int N)
	{
	    // Code here
	    unordered_map<int,int> map;
	    map[9]=362880;
	    map[8]=40320;
	    map[7]=5040;
	    map[6]=720;
	    map[5]=120;
	    map[4]=24;
	    map[3]=6;
	    map[2]=2;
	    map[1]=1;
	    map[0]=1;
	    
	    vector<int>vec;
	    int curr_sum = 0;
	    int i = 9;
	    while(true)
	    {
	        curr_sum+=map[i];
	        vec.push_back(i);
	        if(curr_sum==N) break;
	        if(curr_sum>N)
	        {
	            curr_sum-=map[i];
	            vec.pop_back();
	            i--;
	        }
	    }
	    
	    reverse(vec.begin(),vec.end());
	    return vec;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.FactDigit(N);
		for(auto i: ans)
			cout << i;
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends