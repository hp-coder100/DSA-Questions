//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        int max_l = 0;
        int sum = 0 , j =0;
        map<int,int> m;
        for(int i =0;i<N;i++){
            sum += A[i];
            if(sum == k)
                max_l = max(max_l , i + 1);
            if(m.find(sum - k) != m.end())
                max_l = max(max_l , i - m[sum - k]);
            if(m.find(sum) == m.end())
                m[sum] = i;
        }
        return max_l;
    }
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends