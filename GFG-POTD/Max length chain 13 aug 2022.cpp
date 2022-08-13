//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
   static bool cmp(struct val a, struct val b){
        return a.second < b.second;
    }
    int maxChainLen(struct val p[],int n){
        //Your code here
        sort(p,p+n,cmp);
        int ans=1;
        // int f = p[0].first;
        int s = p[0].second;
        for(int i=1;i<n;i++){
           if(p[i].first > s){
               ans++;
               s = p[i].second;
           }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends