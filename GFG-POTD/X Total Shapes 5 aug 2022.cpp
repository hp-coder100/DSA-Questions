//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        if(i<0  || j<0 || j>grid[0].size()-1 || i>grid.size()-1 || grid[i][j]=='O') //base case
        {
            return;
        }
        grid[i][j]='O';
        dfs(grid,i,j+1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
       
        
    }
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++)   //traversing each sell and changing X to O.
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='X')
                {
                    ++ans;
                    dfs(grid,i,j); //changing all horizontal and vertical X to O
                }
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends