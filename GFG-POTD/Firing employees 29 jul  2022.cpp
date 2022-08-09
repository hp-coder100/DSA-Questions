//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    //sieve of Eratosthenes + dfs    

int count(int ind,vector<int> &dp,vector<int> &a){
       if(a[ind]==-1){
           
           return dp[ind]=0;
       }
       if(dp[ind]!=-1){
           return dp[ind];
       }
       return dp[ind]=1+count(a[ind],dp,a);
   }
   
   int firingEmployees(vector<int> &a, int n){
       int ans=0;    
       vector<int> dp(n,-1);
       int maxi=2*n+2;
       vector<int> prime(maxi,true);
       prime[0]=prime[1]=0;
       for(int i=2;i*i<=maxi;i++){
           if(prime[i]){
               for(int j=i+i;j<maxi;j+=i){
                   prime[j]=false;
               }
           }
       }
       
       for(int i=0;i<n;i++){
           a[i]--;
       }
       for(int i=0;i<n;i++){
           int totalManager=count(i,dp,a);
           if(a[i]!=-1 && prime[totalManager+i+1]){
               ans++;
           }
       }
       return ans;
   }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        
        for(int i=0; i<n; i++)
            cin >> arr[i];

        Solution obj;
        cout << obj.firingEmployees(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends