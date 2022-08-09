//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int solve(int h,int m,vector<vector<int>> &t,int prev){
           
           if(h<=0 || m<=0)
           return 0;
           
           if(t[h][m]!=-1)
           return t[h][m];
           
           int x=0,y=0,z=0;
           if(prev!=1)
           x= 1+solve(h+3,m+2,t,1);
           
           if(prev!=2 && h>5 && m>10)
           y= 1+solve(h-5,m-10,t,2);
           
           if(prev!=3 && h>20 )
           z=1+solve(h-20,m+5,t,3);
           
           t[h][m]=maximum(x,y,z);
           return t[h][m];
       }
       
       int maximum(int x,int y,int z){
           
           if(x>=y && x>=z)
           return x;
           
           else if(y>=x && y>=z)
           return y;
           else
           return z;
       }
       
       int maxLevel(int h,int m)
       {
           // code here
           vector<vector<int>>t(3000,vector<int>(3000,-1));
           int prev=0;
         return  solve(h,m,t,prev);
           
       }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    Solution a;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        cout<<a.maxLevel(h,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends