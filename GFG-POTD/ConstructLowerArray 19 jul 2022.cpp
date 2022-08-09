//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
void merge(int *arr, int lb, int mid, int ub,vector<int>&count, int *index)
{
   int i = lb;
   int j = mid + 1;
   int a[ub-lb+1];
   int k = 0;
   int cnt = 0;
   while (i <= mid && j <= ub)
   {
       if (arr[index[i]] <= arr[index[j]])
       {
           a[k] = index[i];
           count[index[i]] += cnt;
           i++;
       }
       else
       {
           a[k] = index[j];
           cnt++;
           j++;
       }
       k++;
   }

   while (i <= mid)
   {
       a[k] = index[i];
       count[index[i]] += cnt;
       i++;
       k++;
   }
   while (j <= ub)
   {
       a[k] = index[j];
       j++;
       k++;
   }

   int m = lb;
   for (int i = 0; i < k; i++)
   {
       index[m] = a[i];
       m++;
   }
}
void mergeSort(int *arr, int start, int end, vector<int>&count, int *index)
{
   if (start < end)
   {
       int mid = (start + end) / 2;
       mergeSort(arr, start, mid, count, index);
       mergeSort(arr, mid + 1, end, count, index);
       merge(arr, start, mid, end, count, index);
   }
}

   
vector<int> constructLowerArray(int *arr, int n) {
    // code here

    
    vector<int>count(n,0);
    int index[n];
    for(int i=0;i<n;i++)
    {
        index[i]=i;

    }
    mergeSort(arr,0,n-1,count,index);
  
   
    return count;
    
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends