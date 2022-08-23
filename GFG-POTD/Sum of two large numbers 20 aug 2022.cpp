//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string method(string &X,string &Y,int n,int m)
   {
             int i=0,j=0;
                 int carry=0;
                 while(i<=n-1 and j<=m-1)
                 {
                     int val=((X[i]-'0')+(Y[j]-'0')+carry);
                     carry=val/10;
                     val=val%10;
                     X[i]=val+'0';
                     i++;
                     j++;
                 }
                 while(i<=n-1)
                 {
                     int val=((X[i]-'0')+carry);
                     carry=val/10;
                     val=val%10;
                     X[i]=val+'0';
                     i++;
                 }
                 if(carry)
                 X.push_back(carry+'0');
                  
           reverse(X.begin(),X.end());
           int k;
           for(k=0;k<X.size();k++)
           {
               if(X[k]!='0')
               {
                   break;
               }
           
           }
           if(k==X.size())
              return "0";
           return X.substr(k);
   }
   string findSum(string X, string Y) {
           
         reverse(X.begin(),X.end());
         reverse(Y.begin(),Y.end());
         int n=X.size();
         int m=Y.size();
         if(n>=m)
         {
             return method(X,Y,n,m);
         }
            return method(Y,X,m,n);
         
             
   }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends