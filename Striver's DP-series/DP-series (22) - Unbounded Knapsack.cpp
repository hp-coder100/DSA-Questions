#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    
int unboundedKnapsack(int n, int maxWeight, vector<int> &value, vector<int> &weight)
{
  
    
    vector<vector<int>> dp(n, vector<int>(maxWeight+1, 0));
    for(int i=weight[0]; i<=maxWeight; i++){
        dp[0][i] = ((int) i/weight[0]) * value[0];
    }
    for(int i=1;i<n;i++)
        for(int w=0;w<=maxWeight;w++){
            int notTake = dp[i-1][w];
            int take = INT_MIN;
            if(weight[i] <= w)
                take = value[i] + dp[i][w-weight[i]];
            
            dp[i][w] = max(take, notTake);
        }
    return dp[n-1][maxWeight];
}

};
