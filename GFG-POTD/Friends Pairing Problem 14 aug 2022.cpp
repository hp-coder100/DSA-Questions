//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
 
int mod = int(1e9)+7;

int dp[int(1e4)+1];
int solve(int N){
   if(N<=1) return 1;
   if(dp[N]!=-1) return dp[N];
   return dp[N]=  ((1LL*solve(N-1))%mod + ((N-1)*1LL*solve(N-2))%mod)%mod;
}
   int countFriendsPairings(int n) 
   { 
       memset(dp,-1,sizeof(dp));
       return solve(n);
   }
};    
 

//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends